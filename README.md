# IAS-Architecture-Implementation
Implementation of IAS Architecture in C++. A code in Assembly code is executed, and all the steps that take place in a CPU are executed using functions.\

I have implemented a function which checks if a certain number is greater than 1.\
If it is, pre-stored numbers will be added to the number stored in the accumalator. If it isn't, a pre-\
stored number will be loaded into the acccumulator, and other pre-stored numbers will be added to\
this number.\
After each operation, the value stored in the accumulator is displayed.\
The instructions are stored in an array called instr. The data that is used in the program is stored in\
an array called data. I considered these two arrays to be part of the ‘memory’ of the computer.\
I defined the registers PC,MAR,IR,MBR,IBR as strings which hold strings of binary numbers. pcint\
is an integer value which is the int form of the program counter PC.\
I defined functions fetch() and decode(). fetch() fetches the instructions, decode() decodes the\
opcode and executes the function.\
pc is the program counter. It contains the address of the instruction which is being executed.\
mar is a register which contains the address of the data on which the operation is done, or the\
instruction to be fetched.\
ir is a register which contains the op code.\
mbr is a register which acts like a buffer. It stores data/instructions that come from the memory, and\
sends them to other locations.\
ibr is a register which stores the right instruction while the left instruction is getting executed.\
Example Assembly code:\
LOAD M(14), SUB M(1)\
JUMP+ M(0:19) M(14)\
ADD M(1), ADD M(1)\
ADD M(2), ADD M(2)\
ADD M(3), ADD M(3)\
ADD M(4), ADD M(4)\
STORE M(15)\
HALT\
ADD M(5) ADD M(5)\
ADD M(6) ADD M(6)\
ADD M(7) ADD M(7)\
ADD M(8) ADD M(8)\
ADD M(9) ADD M(9)\
STORE M(15)\
HALT\
