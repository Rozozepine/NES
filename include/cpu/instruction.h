#ifndef _INSTRUCTION_H
#define _INSTRUCTION_H
#include <stdint.h>
#include "cpu.h"
#include <stdio.h>
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <errno.h>
#include <stdio.h>
byte read_mem(uint16_t adr, CPU *cpu);
void write_mem(uint16_t adr, byte val, CPU *cpu);

#endif