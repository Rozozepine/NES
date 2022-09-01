#ifndef _DEBUG_H
#define _DEBUG_H

#include "cpu.h"
#include "instruction.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <errno.h>
#include <stdio.h>

void print_mem(CPU *cpu, uint16_t start, uint16_t end);
void inspect_register(CPU *cpu);
#endif