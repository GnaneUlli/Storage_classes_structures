1.
#include<stdio.h>
int main()
{
register int i=10;
int *p = &i;
*p = 11;
printf("%d %d", i, *p);
}

Ans : Error compile time
/*: The register variable can have only register name (not
address) in the processor, we cannot access register variable through
address, ‘*’ is dereferencing operator to memory addresses only. Hence,
the compiler throws an error.*/

2.register int i=10;

Is it mandatory that variable ‘i’ gets stored in the register only?

Ans : False
/* The registers are very busy components of the cpu some times and limited in number
they are not available so then variable have to be stored in memory as auto storage class.*/

3. When does the compiler accept the request to use the variable as a
register? Which is/are true about the variables?
(a) It gets stored in cache memory
(b) It gets stored in the CPU
(c) It gets stored in secondary memory.
(d) It gets stored in the main memory.

Ans : b

4.Which of the given operation cannot be done with the register?
(a) Reading from and updating (writing) into the register variable.
(b) Global declaration of register variable.
(c) Copy a value from the memory variable to the register variable.
(d) All of the above

Ans : b

5.
#include<stdio.h>
int main()
{
int i=10;
void *p = &i;
printf("%d", (int)*p);
return 0;
}
Ans: Error run time
/*The void pointer cannot be accepted without typecasting.
The correct statement is printf("%d", *(int *)p);*/

6.

#include<stdio.h>
int main()
{
int x, a=5, b=10; //line 1
x=a+b;
static int y = x; //line 3
if(y==x)
printf("Hello");
else
if(y>x)
printf("Hi");
else
printf("Bye");
return 0;
}
Ans: compile time error

/*The initialization of static variable with some other variable
cannot be done, the reason is that all static variables must be initialized
before the execution of main(). The expression at line 1 int x = 10; will
get executed only after the execution of main(). The expression at line 3,
static int y = x; the value x is not known, so it throws an error. The
expression static int y = 10; is allowed, because the value 10 is constant
that is known before execution of main().*/

7.
#include <stdio.h>
int main()
{
int x = 3;
int y;
y = sizeof(++x);
printf("%d %d\n", x, y);
return 0;
}

Ans : 3,4
/*sizeof() operator does not evaluate any other expressions*/

8.

#include<stdio.h>
int main()
{
int a = 3,4; //line 1;
int b = (3,4);
if(a == b)
printf("Equal");
else
printf("Not Equal");
return 0;
}

Ans : run time error
/*At line 1, there is no such syntax, the compiler throws an
error. It is similar to int a=3, 4;*/

9.

