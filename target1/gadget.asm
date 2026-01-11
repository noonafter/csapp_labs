5f c3
popq    %rdi

48 83 c4 08
add   $0x8,%rsp

48 89 c7 
movq	%rax, %rdi

89 c7
movl	%eax, %edi

58 90 
popq	%rax nop

48 89 c7 c7 
movq	%rax, %rdi

58 92 
popq	%rax 
xchgl	%eax, %edx

00 00 
addb	%al, (%rax)
 
8d 04 37
 leal	(%rdi, %rsi), %eax

04 37 
addb	$0x37, %al

5c 89 c2 90 
popq	%rsp
movl	%eax, %edx
nop

99 d1 90 90
cltd

d1 20 db 错误
shll	(%rax)

89 d1 48 c0 错误
movl	%edx, %ecx

 87 41 48 89 e0
xchgl	%eax, 0x48(%rcx)
movl	%esp, %eax


48 89 e0
movq	%rsp, %rax

89 e0
movl	%esp, %eax

 89 ce 90 90
 movl	%ecx, %esi

 89 c2 00 c9
 movl	%eax, %edx
addb	%cl, %cl

89 ce 38 c0
movl	%ecx, %esi
cmpb	%al, %al

89 c2 84 c0
movl	%eax, %edx
testb	%al, %al

d1 08 d2  错误
rorl	(%rax)

48 89 e0 91
movq	%rsp, %rax
xchgl	%eax, %ecx

89 ce 92
movl	%ecx, %esi
xchgl	%eax, %edx

87 08 89 e0 90
xchgl	%ecx, (%rax)
movl	%esp, %eax
nop

55 60 00 00
pushq	%rbp

83 c4 08
addl	$8, %esp

83 c0 01
add    $0x1,%eax

