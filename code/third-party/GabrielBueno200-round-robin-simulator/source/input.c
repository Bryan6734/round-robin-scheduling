/*
 * Not my code. Copied for reference; only this comment was added.
 * Author: Henrique Vital Carvalho - Copyright (c) 2021 Henrique Vital Carvalho
 * Source: https://github.com/GabrielBueno200/round-robin-simulator
 * Commit: 7a313cf1ec4c211f6a3ddee9c87bc446f24e1f73
 * License: MIT (see LICENSE in this folder)
 */

#include "../include/input.h"
#include "../include/process.h"

Process* input(){
    printf("Quantos processos você deseja inserir? \n");
    scanf("%d", &numberProcess);

    Process* processes = malloc(sizeof(Process) * numberProcess);

    for (int i = 0; i < numberProcess; i++){
        Process process;
        process.number = i + 1;
        process.quantumCount = 0;
        process.waitTime = 0;

        printf("Criando o processo %d \n", i + 1);
        printf("Qual a duração do processo? \n");
        scanf("%d", &process.duration);
        process.startDuration = process.duration;

        printf("Qual a chegada do processo? \n");
        scanf("%d", &process.arrival);

        printf("Quantas I/O existem no processo? \n");
        scanf("%d", &process.numberIO);

        int* arrayIO = malloc(sizeof(int) * process.numberIO);

        for (int j = 0; j < process.numberIO; j++){
            printf("Quando ocorre a I/O? \n");
            scanf("%d", &arrayIO[j]);
        }
        process.interruptions = arrayIO;

        processes[i] = process;
    }
    printf("\n\n");

    return processes;
}

void clearProcess(Process* processes){
    for (int i = 0; i < numberProcess; i++){
      free(processes[i].interruptions);
    }
    free(processes);
}
