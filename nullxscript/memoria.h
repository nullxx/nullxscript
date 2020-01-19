//
//  memoria.h
//  nullxscript
//
//  Created by Jon Lara Trigo on 18/01/2020.
//  Copyright © 2020 Jon Lara Trigo. All rights reserved.
//
#include "registro.h"

registro registro0 = {.alias = "r0", .valor = "FFFF"};
registro registro1 = {.alias = "r1", .valor = "000F"};
registro registro2 = {.alias = "r2", .valor = "0000"};
registro registro3 = {.alias = "r3", .valor = "0000"};
registro registro4 = {.alias = "r4", .valor = "0000"};
registro registro5 = {.alias = "r5", .valor = "0000"};
registro registro6 = {.alias = "r6", .valor = "0000"};
registro registro7 = {.alias = "r7", .valor = "0000"};
registro registro8 = {.alias = "r8", .valor = "0000"};
registro registro9 = {.alias = "r9", .valor = "0000"};
registro registroA = {.alias = "rA", .valor = "0000"};
registro registroB = {.alias = "rB", .valor = "0000"};
registro registroC = {.alias = "rC", .valor = "0000"};
registro registroD = {.alias = "rD", .valor = "0000"};
registro registroE = {.alias = "rE", .valor = "0000"};
registro registroF = {.alias = "rF", .valor = "0000"};

registro getRegistro(int re){
    switch (re) {
        case 0:
            return registro0;
        case 1:
            return registro1;
        case 2:
            return registro2;
        case 3:
            return registro3;
        case 4:
            return registro4;
        case 5:
            return registro5;
        case 6:
            return registro6;
        case 7:
            return registro7;
        case 8:
            return registro8;
        case 9:
            return registro9;
        case 10:
            return registroA;
        case 11:
            return registroB;
        case 12:
            return registroC;
        case 13:
            return registroD;
        case 14:
            return registroE;
        case 15:
            return registroF;
        default:
            return registro0;
    }
    return registro0;
}
registro setSingleValue(registro registro, char valor[4]){
    for (int i = 0; i <strlen(valor); i++) {
        registro.valor[i] = valor[i];
    }
    return registro;
}
registro setRegistroValue(int re, char valor[4]){
    registro result;
    switch (re) {
        case 0:
        {
            registro0 = setSingleValue(registro0, valor);
            result = registro0;
            break;
        }
        case 1:
        {
            registro1 = setSingleValue(registro1, valor);
            result = registro1;
            break;
        }
        case 2:
        {
            registro2 = setSingleValue(registro2, valor);
            result = registro2;
            break;
        }
        case 3:
        {
            registro3 = setSingleValue(registro3, valor);
            result = registro3;
            break;
        }
        case 4:
        {
            registro4 = setSingleValue(registro4, valor);
            result = registro4;
            break;
        }
        case 5:
        {
            registro5 = setSingleValue(registro5, valor);
            result = registro5;
            break;
        }
        case 6:
        {
            registro6 = setSingleValue(registro6, valor);
            result = registro6;
            break;
        }
        case 7:
        {
            registro7 = setSingleValue(registro7, valor);
            result = registro7;
            break;
        }
        case 8:
        {
            registro8 = setSingleValue(registro8, valor);
            result = registro8;
            break;
        }
        case 9:
        {
            registro9 = setSingleValue(registro9, valor);
            result = registro9;
            break;
        }
        case 10:
        {
            registroA = setSingleValue(registroA, valor);
            result = registroA;
            break;
        }
        case 11:
        {
            registroB = setSingleValue(registroB, valor);
            result = registroB;
            break;
        }
        case 12:
        {
            registroC = setSingleValue(registroC, valor);
            result = registroC;
            break;
        }
        case 13:
        {
            registroD = setSingleValue(registroD, valor);
            result = registroD;
            break;
        }
        case 14:
        {
            registroE = setSingleValue(registroE, valor);
            result = registroE;
            break;
        }
        case 15:
        {
            registroF = setSingleValue(registroF, valor);
            result = registroF;
            break;
        }
        default:
            return registro0;
    }
    return result;
}
