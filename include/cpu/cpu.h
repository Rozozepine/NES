
#ifndef _CPU_H
#define _CPU_H
#define SIZE_MEMORY 65535
#define START_ROM 0x8000
#define STOP_ROM  0xFFFF
#include <stdint.h>
#include <stdio.h>
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <errno.h>
#include <stdio.h>

typedef uint8_t byte;
typedef struct CPU
{
    uint16_t PC;
    byte SP;
    byte A;
    byte X;
    byte Y;
    byte P;
    byte *memory;
} CPU;

CPU *create_cpu();
void load_prog_in_mem(byte *prog, CPU *cpu);
int delete_cpu(CPU *cpu);
int run(CPU *cpu);

#endif