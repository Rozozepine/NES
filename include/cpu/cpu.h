
#ifndef _CPU_H
#define _CPU_H
#define SIZE_MEMORY 65535

#include <stdint.h>

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

CPU *start_cpu();
int interpret(byte * prog, CPU *cpu);
int stop_cpu(CPU *cpu);

#endif