/* 
 * CS:APP Data Lab 
 * 
 * <Please put your name and userid here>
 * 
 * bits.c - Source file with your solutions to the Lab.
 *          This is the file you will hand in to your instructor.
 *
 * WARNING: Do not include the <stdio.h> header; it confuses the dlc
 * compiler. You can still use printf for debugging without including
 * <stdio.h>, although you might get a compiler warning. In general,
 * it's not good practice to ignore compiler warnings, but in this
 * case it's OK.  
 */

#if 0
/*
 * Instructions to Students:
 *
 * STEP 1: Read the following instructions carefully.
 */

You will provide your solution to the Data Lab by
editing the collection of functions in this source file.

INTEGER CODING RULES:
 
  Replace the "return" statement in each function with one
  or more lines of C code that implements the function. Your code 
  must conform to the following style:
 
  int Funct(arg1, arg2, ...) {
      /* brief description of how your implementation works */
      int var1 = Expr1;
      ...
      int varM = ExprM;

      varJ = ExprJ;
      ...
      varN = ExprN;
      return ExprR;
  }

  Each "Expr" is an expression using ONLY the following:
  1. Integer constants 0 through 255 (0xFF), inclusive. You are
      not allowed to use big constants such as 0xffffffff.
  2. Function arguments and local variables (no global variables).
  3. Unary integer operations ! ~
  4. Binary integer operations & ^ | + << >>
    
  Some of the problems restrict the set of allowed operators even further.
  Each "Expr" may consist of multiple operators. You are not restricted to
  one operator per line.

  You are expressly forbidden to:
  1. Use any control constructs such as if, do, while, for, switch, etc.
  2. Define or use any macros.
  3. Define any additional functions in this file.
  4. Call any functions.
  5. Use any other operations, such as &&, ||, -, or ?:
  6. Use any form of casting.
  7. Use any data type other than int.  This implies that you
     cannot use arrays, structs, or unions.

 
  You may assume that your machine:
  1. Uses 2s complement, 32-bit representations of integers.
  2. Performs right shifts arithmetically.
  3. Has unpredictable behavior when shifting if the shift amount
     is less than 0 or greater than 31.


EXAMPLES OF ACCEPTABLE CODING STYLE:
  /*
   * pow2plus1 - returns 2^x + 1, where 0 <= x <= 31
   */
  int pow2plus1(int x) {
     /* exploit ability of shifts to compute powers of 2 */
     return (1 << x) + 1;
  }

  /*
   * pow2plus4 - returns 2^x + 4, where 0 <= x <= 31
   */
  int pow2plus4(int x) {
     /* exploit ability of shifts to compute powers of 2 */
     int result = (1 << x);
     result += 4;
     return result;
  }

FLOATING POINT CODING RULES

For the problems that require you to implement floating-point operations,
the coding rules are less strict.  You are allowed to use looping and
conditional control.  You are allowed to use both ints and unsigneds.
You can use arbitrary integer and unsigned constants. You can use any arithmetic,
logical, or comparison operations on int or unsigned data.

You are expressly forbidden to:
  1. Define or use any macros.
  2. Define any additional functions in this file.
  3. Call any functions.
  4. Use any form of casting.
  5. Use any data type other than int or unsigned.  This means that you
     cannot use arrays, structs, or unions.
  6. Use any floating point data types, operations, or constants.


NOTES:
  1. Use the dlc (data lab checker) compiler (described in the handout) to 
     check the legality of your solutions.
  2. Each function has a maximum number of operations (integer, logical,
     or comparison) that you are allowed to use for your implementation
     of the function.  The max operator count is checked by dlc.
     Note that assignment ('=') is not counted; you may use as many of
     these as you want without penalty.
  3. Use the btest test harness to check your functions for correctness.
  4. Use the BDD checker to formally verify your functions
  5. The maximum number of ops for each function is given in the
     header comment for each function. If there are any inconsistencies 
     between the maximum ops in the writeup and in this file, consider
     this file the authoritative source.

/*
 * STEP 2: Modify the following functions according the coding rules.
 * 
 *   IMPORTANT. TO AVOID GRADING SURPRISES:
 *   1. Use the dlc compiler to check that your solutions conform
 *      to the coding rules.
 *   2. Use the BDD checker to formally verify that your solutions produce 
 *      the correct answers.
 */


#endif
//1
/* 
 * bitXor - x^y using only ~ and & 
 *   Example: bitXor(4, 5) = 1
 *   Legal ops: ~ &
 *   Max ops: 14
 *   Rating: 1
 */
int bitXor(int x, int y) {
  return ~(~x&~y) & ~(x&y);
}
/* 
 * tmin - return minimum two's complement integer 
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 4
 *   Rating: 1
 */
int tmin(void) {
  // tmin是1<<31，tmax是1<<31-1或者~(1<<31)
  // 但是注意下一题不能用移位
  return 1<<31;
}
//2
/*
 * isTmax - returns 1 if x is the maximum, two's complement number,
 *     and 0 otherwise 
 *   Legal ops: ! ~ & ^ | +
 *   Max ops: 10
 *   Rating: 1
 */
int isTmax(int x) {
  // 使用bitXor可以判断两个数是否相异，（逻辑）取反可得到“同或”
  // 没有移位可以用，利用255拼出Tmax不可能。只能利用x本身的性质
  // 比如Tmin+Tmin或者0+0等于0，需要排除0+0
  // Tmax+Tmax或者-1+-1等于-2，需要排除-1
  // 但是编译之后发现，编译器对于int溢出的情况判断真假可能失效，无法利用溢出=-2的性质
  // 需要防止溢出，即利用-2-Tmax=Tmax
  
  // int minus1 = ~1+1;
  // printf("this is %d\n", (x+x^minus1+minus1));
  // printf("!this is %d\n", !(x+x^minus1+minus1));
  // return !(x+x^minus1+minus1) & !!(x^minus1);
  // return !(minus1+~x^x) & !!(x^minus1);
  // return !(~x^x+1) & !!(x+1);
  return !(~x^x+1) & !!~x;
}
/* 
 * allOddBits - return 1 if all odd-numbered bits in word set to 1
 *   where bits are numbered from 0 (least significant) to 31 (most significant)
 *   Examples allOddBits(0xFFFFFFFD) = 0, allOddBits(0xAAAAAAAA) = 1
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 12
 *   Rating: 2
 */
int allOddBits(int x) {
  int odd_mask = 0xAA | (0xAA << 8) | (0xAA << 16) | (0xAA << 24);
  return !((x & odd_mask) ^ odd_mask);
}
/* 
 * negate - return -x 
 *   Example: negate(1) = -1.
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 5
 *   Rating: 2
 */
int negate(int x) {
  // 补码中，-x等价于~x+1
  return ~x+1;
}
//3
/* 
 * isAsciiDigit - return 1 if 0x30 <= x <= 0x39 (ASCII codes for characters '0' to '9')
 *   Example: isAsciiDigit(0x35) = 1.
 *            isAsciiDigit(0x3a) = 0.
 *            isAsciiDigit(0x05) = 0.
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 15
 *   Rating: 3
 */
int isAsciiDigit(int x) {
  // 初步想法是x-left和rigth-x都需要>=0，但需要解决溢出问题
  // 分正负解决，负数直接return0
  // 正数不会溢出
  int sign = x >> 31;
  int dis_left = x + ~0x30+1;
  int dis_right = 0x39 + ~x+1;
  int sign_left = dis_left >> 31;
  int sign_right = dis_right >> 31;
  return !(sign_left | sign_right)&~sign;
}
/* 
 * conditional - same as x ? y : z 
 *   Example: conditional(2,4,5) = 4
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 16
 *   Rating: 3
 */
int conditional(int x, int y, int z) {
  // 使用bitAnd的方式来实现选择: y&sign+z&~sign或者反过来，类似y*flag+z*(1-flag)
  // 其中，sign只能取0或者-1
  // 因此，当x=0，sign为0（或者-1）；当x非0，sign为-1（或者0）
  // 判断x是否非0，直接使用!x
  // 若x=0，!x=1,若x非0，!x=0
  // 发现使用!x-1即!x+~1+1，或者-!x即~!x+1都能实现。选一种即可
  int sign = ~!x+1;
  return (y&~sign) + (z&sign); // 注意，在二元运算符中*/+-的运算级别高，因此这里必须加括号
}
/* 
 * isLessOrEqual - if x <= y  then return 1, else return 0 
 *   Example: isLessOrEqual(4,5) = 1.
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 24
 *   Rating: 3
 */
int isLessOrEqual(int x, int y) {
  // 本来时直接用y-x然后取符号判断，但看到max op，发现这一题不简单。
  // 稍加思考，发现直接减可能会溢出，得分情况讨论
  // 将补码分为非负数和负数两个部分，即0到tmax和tmin到-1
  // 当x和y处于同一个部分时，x-y和y-x都不会溢出
  // 当x和y处于不同部分时，可以直接通过符号位判断大小
  int sign = (x>>31)^(y>>31);
  int sub = y+~x+1;
  int res = !(sub>>31);
  return (!(y>>31)&sign) + (res&~sign);
}
//4
/* 
 * logicalNeg - implement the ! operator, using all of 
 *              the legal operators except !
 *   Examples: logicalNeg(3) = 0, logicalNeg(0) = 1
 *   Legal ops: ~ & ^ | + << >>
 *   Max ops: 12
 *   Rating: 4 
 */
int logicalNeg(int x) {
  // x>>31取出符号位+1，可以方便的判断负数非0
  // 将正数变为负数，再判断非0
  return ((x>>31)+1) & ((~x+1>>31)+1);
}
/* howManyBits - return the minimum number of bits required to represent x in
 *             two's complement
 *  Examples: howManyBits(12) = 5
 *            howManyBits(298) = 10
 *            howManyBits(-5) = 4
 *            howManyBits(0)  = 1
 *            howManyBits(-1) = 1
 *            howManyBits(0x80000000) = 32
 *  Legal ops: ! ~ & ^ | + << >>
 *  Max ops: 90
 *  Rating: 4
 */
int howManyBits(int x) {
  // 看到这个max ops，断定这一题肯定不简单
  // 对于正数，可以找第一个1出现的索引，索引+1就是答案
  // 对于负数，可以找第一个0出现的索引。
  // 负数也可以通过取反，变成正数处理，对于tmin逻辑一样不用单独讨论
  // int isZero = ~!x+1;
  // int isMinus1 = ~!~x+1;
  // int isAllBitsSame = isZero | isMinus1;
  int isAllBitsSame = ~(!x | !~x)+1;
  int sign = x >> 31;
  int half, pos;
  x = (x&~sign) + (~x&sign);
  // 接下来对于“正数”x，找到第一个1出现的索引pos
  // 最笨的方法是一位一位检查，但是太慢，考虑使用二分法进行搜索
  // 先检查高16位
  half = (x >> 16);
  // x = conditional(half, half, x&(1<<16)-1)
  // pos = conditional(half, 16, 0)
  sign = ~!half+1;
  x = (half&~sign) + (x&(1<<16)+~1+1&sign);
  pos = 16&~sign;
  // 再检查高8位
  half = x >> 8;
  sign = ~!half+1;
  x = (half&~sign) + (x&0xFF&sign);
  pos = pos + (8&~sign);
  // 再检查高4位
  half = x >> 4;
  sign = ~!half+1;
  x = (half&~sign) + (x&0xF&sign);
  pos = pos + (4&~sign);
  // 再检查高2位
  half = x >> 2;
  sign = ~!half+1;
  x = (half&~sign) + (x&3&sign);
  pos = pos + (2&~sign);
  // 再检查高1位
  half = x >> 1;
  sign = ~!half+1;
  x = (half&~sign) + (x&1&sign);
  pos = pos + (1&~sign);
  // pos为第一个1的索引，从pos到0一共pos+1比特
  // 还需要一个符号位,所以是pos+2
  // 0需要单独处理，因为这么搜索下来，其第一个1的索引为0
  // -1也需要单独处理，因为其取反之后就是0
  // 可以将0和-1合并处理
  //return (1&isMinus1) + ((1&isZero) + ((pos+2)&~isZero) &~isMinus1);
  return (1&isAllBitsSame) + (pos+2&~isAllBitsSame);
}
//float
/* 
 * floatScale2 - Return bit-level equivalent of expression 2*f for
 *   floating point argument f.
 *   Both the argument and result are passed as unsigned int's, but
 *   they are to be interpreted as the bit-level representation of
 *   single-precision floating point values.
 *   When argument is NaN, return argument
 *   Legal ops: Any integer/unsigned operations incl. ||, &&. also if, while
 *   Max ops: 30
 *   Rating: 4
 */
unsigned floatScale2(unsigned uf) {
  // 按照阶码，分0,0-0xfe,0xff三种情况讨论
  unsigned res = 0;
  unsigned exp = (uf >> 23) & 0xff;
  unsigned smask = 1<<31;
  unsigned dmask = ~smask;
  unsigned emask = 0xff<<23;
  if(exp == 0){
  // 非规格化数，符号不变，其余位可以当作unsigned+-和左右移
    res = ((uf << 1) & dmask) | (uf & smask);
  }else if(exp == 0xff){
  // NaN和无穷大直接返回
    res = uf;
  }else{
  // 规格化值先将阶码置零，然后填上阶码+1
    res = (uf & ~emask) | ((exp+1&0xff)<<23);
  }
  return res;
}
/* 
 * floatFloat2Int - Return bit-level equivalent of expression (int) f
 *   for floating point argument f.
 *   Argument is passed as unsigned int, but
 *   it is to be interpreted as the bit-level representation of a
 *   single-precision floating point value.
 *   Anything out of range (including NaN and infinity) should return
 *   0x80000000u.
 *   Legal ops: Any integer/unsigned operations incl. ||, &&. also if, while
 *   Max ops: 30
 *   Rating: 4
 */
int floatFloat2Int(unsigned uf) {
  // float或double转int，会向0舍入，即去掉小数部分
  int iuf = uf;
  int sign = iuf >> 31;
  // 得到小数点已经右移23位的结果
  int res = uf & 0x7fffff | 0x800000;
  unsigned exp = (uf >> 23) & 0xff;
  if(exp >= 158){
    // 阶码>=31，包括全1，直接变Tmin
    res = 1<<31;
  }else if(exp <= 126){
    // 阶码<=-1，向0舍入，全为0
    res = 0;
  }else if(exp >= 150){
    // 阶码>=23，小数点还需要右移，相当于res左移
    res <<= (exp-150);
  }else{
    // 阶码<=23，小数点需要左移，相当于res右移
    res >>= (150-exp);
  }
  return (res ^ sign) + ~sign + 1;
}
/* 
 * floatPower2 - Return bit-level equivalent of the expression 2.0^x
 *   (2.0 raised to the power x) for any 32-bit integer x.
 *
 *   The unsigned value that is returned should have the identical bit
 *   representation as the single-precision floating-point number 2.0^x.
 *   If the result is too small to be represented as a denorm, return
 *   0. If too large, return +INF.
 * 
 *   Legal ops: Any integer/unsigned operations incl. ||, &&. Also if, while 
 *   Max ops: 30 
 *   Rating: 4
 */
unsigned floatPower2(int x) {
    // 2^x>0,符号位=0,尾数=1
    unsigned res = 0;
    if(x>127){
        res = 0xff<<23;
    }else if(x>=-126){
        x+=127;
	res = x << 23;
    }
    return res;
}
