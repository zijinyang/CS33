Part 1.
1.
    int convertToBool(int x) {
        return !!x;
    }

2.
    int subtract(int x, int y){
        int negY = ~y + 1;
        return x + negY;
    }
    
3.
    int killKthBit(int n, int k){
        int mask = 1 << (k);
        return n & ~mask;
    }

Part 2.

4. 

$0x110 0x110 (%rax, %rdx)       0xCC 
%rax   0x104 3(%rax, %rbx)      0x19 
0x110  0x42  256(, %rdx, 2)     0xCC 
(%rax) 0x34  (%rax, %rdx, 2)    0x19 
8(%rax)0x19  229(%rcx, %rbx, 8) 0x42

5. 

%rdx = 0x1000
%r12 = 0x12345
0x1008 = 0x12345

%rax = 0x12345
%rbx = 0x10080


6. (%rax + % rcx) * 4

movq %rcx, %rdx
addq %rax, %rdx
multq $4, %rdx 

7.

a) %eax is 32bit and %rdx is 64bit, so we can't mov %eax to %rdx directly, as the sizes dont' match

b) %di represents the lower 16 bits of %rdi, so movb doesn't work, as it can only move bytes

c) you can't call mov from memory to memory

d) %eax is a 32bit register, so mov to (%eax) is not possible as a 32 bit memory adderess is not valid in a 64 bit system