/*
 * Not my code. Copied for reference; only this comment was added.
 * Author: Henrique Vital Carvalho - Copyright (c) 2021 Henrique Vital Carvalho
 * Source: https://github.com/GabrielBueno200/round-robin-simulator
 * Commit: 7a313cf1ec4c211f6a3ddee9c87bc446f24e1f73
 * License: MIT (see LICENSE in this folder)
 */

#ifndef INPUT_H_
#define INPUT_H_

#include <stdio.h>
#include <stdlib.h>
#include "../include/process.h"

Process* input();
void clearProcess(Process* processes);

#endif