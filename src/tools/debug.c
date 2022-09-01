#include "instruction.h"
#include "cpu.h"
#include "debug.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <errno.h>
#include <stdio.h>

void print_mem(CPU *cpu, uint16_t start, uint16_t end){
    printf(" ===== MEMORY ===== \n");
    for(int i = start; i < end;i = i+4){
        printf("%x : %x %x %x %x \n",i, cpu->memory[i],cpu->memory[i+2],cpu->memory[i+3],cpu->memory[i+4]);
    }
}
void inspect_register(CPU *cpu){
    printf(" ===== REGISTER ===== \n");
    printf("A : %x \n", cpu->A);
    printf("X : %x \n", cpu->X);
    printf("Y : %x \n", cpu->Y);
    printf("SP : %x \n", cpu->SP);
    printf("PC : %x \n", cpu->PC);
}