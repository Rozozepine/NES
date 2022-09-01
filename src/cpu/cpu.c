#include "cpu.h"
#include "instruction.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <errno.h>
#include <stdio.h>

CPU *create_cpu(){
    CPU *cpu = malloc(sizeof(CPU));
    if (cpu == NULL){
        perror("cpu malloc");
        exit(0);
    }
    cpu->A = 10;
    cpu->X = 0;
    cpu->Y = 0;
    cpu->SP = 0;
    cpu->PC = (uint16_t) 0;
    cpu->memory = calloc(sizeof(byte),SIZE_MEMORY);
    if (cpu->memory == NULL){
        perror("memory malloc");
        exit(0);
    }
    return cpu;
}


int run(CPU *cpu){
    while (1)
    {
        byte opcode = cpu->memory[cpu->PC];
        cpu->PC ++ ;

        if(cpu->PC >= STOP_ROM){
            break;
        }
    }
    return 0;
    
}

void load_prog_in_mem(byte *prog, CPU *cpu){
    for (int i = 0; i < (STOP_ROM - START_ROM); i++){
          cpu->memory[START_ROM + i] = prog[i];
    } 
    cpu->PC = START_ROM;
}
 
int delete_cpu(CPU *cpu){
    free(cpu->memory);
    free(cpu);
}
