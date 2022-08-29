#include "cpu.h"
#include <string.h>
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <errno.h>

int main (int argc,char **argv){
    CPU *cpu = start_cpu();
    printf("A = %i", cpu->memory[20]);
    return 0;
}
