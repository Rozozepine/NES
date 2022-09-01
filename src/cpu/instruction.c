#include "instruction.h"
#include "cpu.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <errno.h>
#include <stdio.h>

byte read_mem(uint16_t adr, CPU *cpu){
    return cpu->memory[adr];
}
void write_mem(uint16_t adr, byte val, CPU *cpu){
    cpu->memory[adr] = val;
}
