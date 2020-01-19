//
//  main.c
//  nullxscript
//
//  Created by Jon Lara Trigo on 18/01/2020.
//  Copyright © 2020 Jon Lara Trigo. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include "memoria.h"
#include <unistd.h> // sleep
#include <stdlib.h>
#include "tools.h"


registro *memoria;


void mainProgress(int action, int r){
    char setString[4];
    registro registroOrigin = getRegistro(r);
    
    
    
    switch (action) {
        case 0:
                {
                    // get registro valor
                    printf("{\"code\": 1,\"mode\": %d,\"alias\": \"%s\", \"valor\": \"%s\", \"address\": \"%p\"}\n", action, *registroOrigin.alias, registroOrigin.valor, &registroOrigin.valor);
                    break;
                }
        case 1:
                {
                    // set registro valor
                    scanf("%s", setString);
                    if (isCharLengthValid(setString) == 1){
                        registro registroResult = setRegistroValue(r, setString);
                        printf("{\"code\": 1,\"mode\": %d,\"alias\": \"%s\", \"valor\": \"%s\", \"address\": \"%p\"}\n", action, *registroResult.alias, registroResult.valor, &registroResult.valor);
                    }else{
                        printf("{\"code\": 0,\"mode\": %d,\"alias\": NULL, \"valor\": NULL}\n", action);
                    }
                    break;
                }
        case 2:
        {
            // get memoria
            printf("{\"code\": 1,\"mode\": %d,\"alias\": \"mem%d\", \"valor\": \"%s\", \"address\": \"%p\"}\n", action, r, memoria[r].valor, &memoria[r].valor);
            break;
        }
        default:
            break;
    }
}
char *getMemoria(registro *memoria, int intpos){
    return memoria[intpos].valor;
}
int main(int argc, const char * argv[]) {
    srand(time(NULL));
    
    
    
    
    
    int MAX_MEMORY = 61439;

    memoria = calloc(MAX_MEMORY,sizeof(registro));
    for (int i = 0;i<61439; i++){
        char hex[5];
        sprintf(hex, "%004x", getRandom(0, MAX_MEMORY));
        memoria[i] = setSingleValue(memoria[i], hex);
    }
    //printf("Memoria asignada\n");
    
    
    
    
    
    
    int action = -1, r = -1;
    int funcionando = 1;
    while (funcionando == 1){
        printf("Introduce tu comando: ");
        scanf("%d %d", &action, &r);
        if (isEntryValid(r, action) == 1){
            mainProgress(action, r);
        }else{
            printf("{\"code\": 0,\"mode\": %d,\"alias\": NULL, \"valor\": NULL}\n", action);
        }
        
        
        if (action == -1){
            funcionando = 0;
        }
        action = -1; r = 0; // vuelvo a setearlas a default
    }

    return 0;
}

/*#include <stdlib.h>
#include <OpenGL/gl.h>
#include <GLUT/glut.h>

void display () {

    glClearColor ( 0, 0, 0, 0 );

    glClear ( GL_COLOR_BUFFER_BIT );

    glLoadIdentity ();

    glFlush ();

}

int main ( int argc, char** argv ) {
    glutInit ( &argc, argv );
    glutInitDisplayMode ( GLUT_SINGLE );
    glutInitWindowSize ( 640, 480 );
    glutInitWindowPosition ( 100, 100 );
    glutCreateWindow ( "CODE-2" );
    glutDisplayFunc ( display );
    glutMainLoop ();
    
    return 0;

 }*/
