Java Placement Batch:
C-Lang : Operators Assignment.
#include<stdio.h>
main()
{
 int a=3,b=5,c=2,d=7,e;
 e = d-b%(a+c)-d+(b/a)-c+a-b;
 printf("%d",e);
}
#include <stdio.h>
int main()
{
         int x = 5 % 1 / 4 - 4 / 4;
         printf("%d", x);
 return 1;
}
#include <stdio.h>
int main()
{
int x = 10 % 2 | 3 + 6 * 4;
         printf("%d", x);
 return 1;
}
#include<stdio.h>
main()
{
 int a=2,b=3,c;
 c = ++a >= 2 && --b <= 2;
 printf("a=%d b=%d c=%d",a,b,c);
}
#include<stdio.h>
main()
{
 int a=10,b;
 b = a++;
 printf("%d,%d",a,b);
}
#include<stdio.h>
main()
{
int a, b;
a = -3-(-3);
b = -3--3);
printf("%d,%d\n",a,b);
}
#include<stdio.h>
main()
{
int x=10,y=20,z;
 z = x++ * --y ;
 printf("%d,%d,%d",x,y,z);
}
#include<stdio.h>
main()
{ 
 int res = 10>20 ? 10 : 20>30 ? 20 : 30;
 printf("res : %d\n",res);
}
#include<stdio.h>
main()
{
 int a =5;
 a = a++ +  ++a ;
 printf("a : %d\n",a);
}
#include<stdio.h>
main()
{
 int x=3,y=7,z;
 z = ++x * y-- ;
 x = y-- + ++z ;
 y = z-- + x++ ;
 printf("%d,%d,%d",x,y,z);
}
#include<stdio.h>
main()
{
 int a=6,b=3;
 b = a-- + a-- + a++;
 b = b-- ;
 a = a++ + ++b;
 printf("%d,%d",a,b);
}
#include<stdio.h>
main()
{
 int x=5,y=4,z;
 z = x-- - ++y ;
 x = z-- + --y ;
 z = --x - ++y ;
 z = ++y + --x ;
 printf("%d,%d,%d",x,y,z);
}
#include<stdio.h>
main()
{
 int a=5;
 printf("%d,%d,%d,%d", a++ , ++a , a-- , a--);
}
#include<stdio.h>
main()
{
 int a=3,b=5;
 printf("%d,%d,%d", a++ - ++b , --a + b-- , ++a-b--);
}
#include<stdio.h>
main()
{
 int a=5 , b=2 , c=3, d, e;
 d = a == b + c;
printf("%d,%d\n",d,e);
}
#include<stdio.h>
main()
{
 int a=35, b=15, c=25,d,e;
 d = a > c > b ;
 e = c > b > a - 30 ;
 printf("%d,%d",d,e);
}
#include<stdio.h>
main()
{
 int x=5 , y = 0 , a,b;
 a = ++y || ++x ;
 b = --y && ++x ;
 printf("%d,%d,%d,%d\n",x,y,a,b);
}
#include <stdio.h>
main()
{
int a = -1, b = 5, c = 0, d;
d = ++a && ++b || ++c;
printf("%d %d %d %d", a,  b, c, d);
}
#include<stdio.h>
main()
{
int a=5,b=0,c=3,d;
d = a && b + c;
printf("%d\n",d);
}
#include<stdio.h>
main()
{
int x;
x = 4%5 + 6%5;
printf ("x = %d",x);
}
#include<stdio.h>
main()
{
 int a=2,b=3,c=5,d;
 d = a-2 && ++b || ++c ;
 printf("%d,%d,%d,%d" , a, b, c, d);
}
#include<stdio.h>
main()
{
int a=2,b=3,c=4,d;
d = a  && b++ - 3 || ++c ;
printf("%d,%d,%d,%d",a,b,c,d);
}
#include<stdio.h>
main()
{
  int a = 2;
  a = !!++a;
  printf("%d\n",a);
}
#include<stdio.h>
main()
{
 int a=2,b=3,c;
 c = ++a >= 4 && --b <= 2;
 printf("a=%d b=%d c=%d",a,b,c);
}
Note : Bitwise & has highest priority than ^
#include<stdio.h>
main()
{
 int a = 5, b = 6, c = 4;
 a = a & b ^ c;
 printf("a = %d",a);
}
#include <stdio.h>
main()
{
int a = 10, b = 5, c = 3;
b != !a;
c = !!a;
printf("%d\t%d", b, c);
}
#include <stdio.h>
int main()
{
int i = 5;
int j = i / -4;
int k = i % -4;
printf("%d %d\n", j, k);
return 0;
}
#include<stdio.h>
main()
{
int i=4, j=8;
printf("%d, %d, %d\n", i|j&j|i, i|j&&j|i, i^j);
}
#include<stdio.h>
int main(void)  
{  
  int x=5 , y=2;
 printf("%d", x/y);
  return 0;  
}  
#include<stdio.h>
main()
{
 int a=4,b=5;
 b = a++ + a--;
 a = ++b + b--;
 printf("%d,%d",a,b);
}
#include<stdio.h>
int main(void)  
{  
  int x=5 , y=2;
 int z = (float)x/y ;
 printf("%f", z);
  return 0;  
}  
#include<stdio.h>
main()
{
 int a=0 , b=0 ;
 a++ ? ++a : b-- ;
 printf("%d , %d", a, b);
}
#include<stdio.h>
int main(void)  
{  
  int a=3,b=5,c=2,d=7,e;
 e=d-b%(a+c)-d*(b/a)-c/a-b;
 printf("e=%d",e);
  return 0;  
}  
main()
{
 int a=3 , b=4 , c, d;
 c = a < a++ ;
 d = ++b > b ;
 printf("%d , %d , %d, %d ", a, b, c, d);
}
#include<stdio.h>
int main(void)  
{  
  int x=5 , y=2;
 float z = x%y ;
 printf("%f", z);
  return 0;  
}  
main()
{
  int a=25,b=15,c=10,d,e;
 d = a > b > c;  
 e = b < a > c ;
 printf("%d,%d", d , e);
}
main()
{
 int a=0 , b=5 ;
 a=b ? printf("Hi") : printf("Hello");
 printf("%d,%d\n",a , b);
}
main()
{
 int a ;
 a = printf("Hello\n");
 a = printf("%d", ++a );
 printf(“%d” , --a);
}
#include<stdio.h>
main()
{
 int x=5 , y = 0 , a, b;
 a = ++y || ++x ;
 b = --y && ++x ;
 printf("%d,%d,%d,%d", x, y, a, b);
}
#include<stdio.h>
void main()
{
 int x=-13;
 x = !!x ;
 printf ("x = %d",x);
}
#include<stdio.h>
void main()
{
 int a=10, b=5, c=3;
  c = b != !a;  
 b = !a != !!c;
    printf("%d,%d,%d",a,b,c);
}
#include<stdio.h>
main()
{
   int a=0,b=0,c=0,d;
   d = a || b == c;
   printf("%d\n",d);
}
#include<stdio.h>
void main()
{
int a;
 a =  7*5 / 3 + 9;      
printf("%d",a);
}
#include <stdio.h>
void main()
{
int a = 5.3 % 2;
printf("%d", a);
}
#include <stdio.h>
main()
{
int a = 10, b = 5;
a=printf("%d",a && (b = a - 10));
printf("%d",a);
}
#include <stdio.h>
main()
{
        int a = (10,20,30);
        int b = (++a,a++,a++);
        printf("%d\n", b);
}
#include<stdio.h>
int main(void)  
{  
  int x=0 , y=3 ;
 x+1 ? --x : ++y ;
 printf("%d,%d", x,y);
  return 0;  
}  
#include<stdio.h>
main()
{ 
 int res = 10>20 ? 10 : 20>30 ? 20 : 30;
 printf("res : %d\n",res);
}
#include<stdio.h>
int main()
{
int a;
     a=sizeof(!5.6);
     printf("%d",a);
     return 0;
}
#include<stdio.h>
main()
{ 
 int res = 10<20 ? 20<30 ? 10 : 20 : 30;
 printf("res : %d\n",res);
}
#include<stdio.h>
int main()
{
 int a = 8;
 printf("%d , %d", a << 1,a << 2);
 return 0;
}
#include<stdio.h>
int main(void)  
{  
  int a, b=10 ;
 a = 20 == b ;
 printf("a : %d \n",a);
  return 0;  
}  
#include<stdio.h>
main()
{ 
 int x=5 , y;
 y = x*2 + ++x ;
 printf("%d,%d",x, y);
}
#include<stdio.h>
int main()
{
int x ;
x=10,20,30;
     printf("%d",x);
     return 0;
}
#include<stdio.h>
int main()
{
    int i=1;
    i=2+2*i++;
    printf("%d",i);
    return 0;
}
#include<stdio.h>
int main()
{
    int x ;
    x = (10,20,30), 40;
    printf("%d",x);
    return 0;
}
#include<stdio.h>
main()
{
    short int a=8,b,c;
    b = a << 3 ;
    c = a >> 2 ;
    printf("[%d][%d]",b,c);
}
#include <stdio.h>
main()
{
int a = -1, b = 5, c = 0, d;
d = ++a && ++b || ++c;
printf("%d %d %d %d", a,  b, c, d);
}
#include<stdio.h>
main()
{
  int a=5,b=3,c=7,d=5,e,f ;
 e = a++  !=  d--; 
 f = ++b  ==  d++;
 printf("%d,%d, b,e);
}
#include<stdio.h>
main()
{
int a=5,b=0,c=3,d;
d = a && b + c;
printf("%d\n",d);
}
#include<stdio.h>
main()
{
 int a=5,b=3,c=2,d=3,e,f,g,h;
 e = (b++ == ++c)|| (--b != d--);
 f  = (b-- != d++)|| (--c <= --a);
 g = (c++ >= --d)&& (++b != --c); 
 h = (e++ <= --f)|| (++g != --c);
 printf("%d,%d,%d" , a,c,e);
}
#include<stdio.h>
main()
{
int a=2,b=3,c=4,d;
d = a  && b++ - 3 || ++c ;
printf("%d,%d,%d,%d",a,b,c,d);
}
#include<stdio.h>
int main(void)  
{  
  int a=0, b=10 ;
 a = b | a++  ;
 printf("a : %d \n",a);
  return 0;  
}  
Bitwise & has highest priority than ^
#include<stdio.h>
main()
{
 int a = 5, b = 6, c = 4;
 a = a & b ^ c;
 printf("a = %d",a);
}
Pick the odd statement?
A. Performs operation on single operand
B. Modify operators comes under Unary operator
C. Address operator also called Unary operator
D. All of above
E. None of above
What increment operator does?
A. Increases the value by 1
B. Increase the value by size of data type.
C. Neither A nor B
D. None of the above
What is the difference between pre-increment & post-increment?
A. Pre-increment increases the value and executes
B. Post increment evaluates and then increases
C. Both A and B 
D. Both increments before execute
E. Both execute before increment
Find out the correct sequence of operators according to priorities?
A. Arithmetic<relational
B. Logical>relational
C. Arithmetic>relational
D. Relational>logical
Will second expression executes if expression fails in case of logical AND operator?
A. Yes
B. No
C. Depends on compiler
D. None of above
Which operator having higher priority among > and < ?
A. Greater than
B. Less than
C. Equal priority
D. None of the above
How many arithmetic operators supported by C-language?
A. 6
B. 4
C. 5
D. 3
What mod operator returns after evaluation?
A. Quotient
B. Remainder
C. Devisor
D. None of above
How many operands required for conditional operator?
A. Two operands
B. Single operand
C. Three operands
D. None of the above
Which one executes first among arithmetic & relational operators in an expression?
A. Arithmetic operators
B. Relational operators
C. Both are having equal priority
D. None of the above.
Logical operator belongs to which classification of operators?
A. Unary operators
B. Binary operators
C. Ternary operators
D. Both A and B
What XOR operator returns when a and b are false bits?
A. 0
B. 1
C. True
D. False 
Which of the following operator having least priority?
A. &&
B. *
C. <=
D. =
Which of the following is not compound assignment operator?
A. /=
B. +=
C. ==
D. &=
What would be the result of the expression (-13%5)?
A. 3
B. 2
C. -2
D. -3
A+=1 is equivalent to which of the following statement?
A. A+1
B. A++
C. A=A+1
D. Both b and c
How many ways we can use ‘&’ operator?
A. As address operator
B. As bitwise operator
C. Both address & bitwise operator
D. None of the above
In case of which operator the next condition will be evaluated only if the previous condition is true?
A. ||
B. &&
C. Both a and b
D. Neither a nor b