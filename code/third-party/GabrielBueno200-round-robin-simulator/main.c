/*
 * Not my code. Copied for reference; only this comment was added.
 * Author: Henrique Vital Carvalho - Copyright (c) 2021 Henrique Vital Carvalho
 * Source: https://github.com/GabrielBueno200/round-robin-simulator
 * Commit: 7a313cf1ec4c211f6a3ddee9c87bc446f24e1f73
 * License: MIT (see LICENSE in this folder)
 */

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include "include/algorithm.h"
#include "include/input.h"
#include "include/process.h"
#include "include/queue.h"

int main(){
    int quantum;
    printf("Digite o valor do quantum: ");
    scanf("%d", &quantum);

    Process* processes = input();
    calculate(processes, quantum);

    clearQueue();
    clearProcess(processes);

    return 0;
}
