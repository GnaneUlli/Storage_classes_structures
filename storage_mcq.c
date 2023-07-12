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
#include<stdio.h>
extern int j = 20;
int main()
{
extern int i; //line 1
i = 10; //line 2
printf("%d ",i);
printf("%d",j);
return 0;
}

Ans : link Time error
/*In line 2, we are trying to store value 10
in variable ‘i’ and variable ‘i’ that are not bound to memory yet. Hence
compiler throws a link-time error.*/

10.
one.c
-----
#include<stdio.h>
extern int i;
int i = 10;
extern int p;
int main()
{
extern int i;
printf("%d %d",i,p);
return 0;
}
two.c
-----
int p = 20;

Ans : 10,20
/*The given program will not report any error. In one.c file the
variable ‘p’ is an extern variable that can refer to variables of other files
also and in two.c we are having the definition of ‘p'.*/

11.
-----
#include<stdio.h>
extern int i;
int i = 10;
extern int p;
int main()
{
extern int i;
printf("%d %d",i,p);
return 0;
}
two.c
-----
#include<stdio.h>
int p = 20;
int main()
{
printf("%d",p);
return 0;
}

Ans : Two functions with same name thows an error.

12.
#include<stdio.h>
int fun(int);
int main()
{
static auto int n;
printf("%d",res);
scanf("%d",&n);
int res = fun(n);
return 0;
}
int fun(int n)
{
if(n == 0)
return 0;
else if(n == 1)
return 1;
else
return (fun(n-1) + fun(n-2));
}

Ans : Error Compile time 

//Two different storage classes canot be declared in same variable.


