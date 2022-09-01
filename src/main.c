#include "cpu.h"
#include "debug.h"
#include <string.h>
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <errno.h>

int main (int argc,char **argv){
    CPU *cpu = create_cpu();
    byte prog[STOP_ROM - START_ROM];
    prog[0] = 0xa9;
    prog[1] = 0xc0;
    prog[2] = 0xaa;
    prog[3] = 0xe8;
    prog[4] = 0x00;
    load_prog_in_mem(prog,cpu);
    print_mem(cpu, START_ROM, START_ROM+16);
    inspect_register(cpu);
    run(cpu);
    inspect_register(cpu);
    return 0;
}
