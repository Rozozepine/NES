#include "cpu.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <errno.h>

CPU *start_cpu(){
    CPU *cpu = malloc(sizeof(CPU));
    if (cpu == NULL){
        perror("cpu malloc");
        exit(0);
    }
    cpu->A = (byte) 10;
    cpu->X = (byte) 0;
    cpu->Y = (byte) 0;
    cpu->SP = (byte) 0;
    cpu->PC = (uint16_t) 0;
    cpu->memory = calloc(sizeof(byte),SIZE_MEMORY);
    if (cpu->memory == NULL){
        perror("memory malloc");
        exit(0);
    }
    return cpu;
}
int interpret(byte * prog, CPU *cpu){

}
int stop_cpu(CPU *cpu){
    free(cpu->memory);
    free(cpu);
}
