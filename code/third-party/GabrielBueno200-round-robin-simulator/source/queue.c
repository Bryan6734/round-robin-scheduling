/*
 * Not my code. Copied for reference; only this comment was added.
 * Author: Henrique Vital Carvalho - Copyright (c) 2021 Henrique Vital Carvalho
 * Source: https://github.com/GabrielBueno200/round-robin-simulator
 * Commit: 7a313cf1ec4c211f6a3ddee9c87bc446f24e1f73
 * License: MIT (see LICENSE in this folder)
 */

#include "../include/queue.h"

Process *processArray;
int itemCount = 0;

void createQueue(){
    processArray = malloc(sizeof(Process) * numberProcess);
}

Process *first(){
    if (!isEmpty())
        return processArray;
    return NULL;
}

bool isEmpty(){
    return itemCount == 0;
}

int size(){
    return itemCount;
}

void push(Process data){
    processArray[size()] = data;
    itemCount++;
}

Process pop(){
    if (!isEmpty()){
        Process data = *(first());

        for (int i = 0; i < size() - 1; i++){
            processArray[i] = processArray[i + 1];
        }

        itemCount--;
        return data;
    }
}

void showQueue(){
    printf("Fila: ");
    for (int i = 0; i < size(); i++){
        if (processArray[i].duration)
            printf("P%d (%d) - ", processArray[i].number, processArray[i].duration);
    }
    printf("\n");
}

void clearQueue(){
  free(processArray);
}