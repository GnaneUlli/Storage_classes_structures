1.Consider the following two programs:
Prog 2:
#include <stdio.h>
#include <string.h>
#include<stdlib.h>
struct student
{
char name[20];
};
int main()
{
struct student s1 , s2;
strcpy(s1.name, "masters");
s2 = s1;
s1.name[2] = ‘P’;
s1.name[3] = ‘Q’;
printf("%s\n%s",s1.name,s2.name);
return 0;
}
Prog 1:
#include <stdio.h>
#include <string.h>
#include<stdlib.h>
struct student
{
char *name;
};
int main()
{
struct student s1 , s2;
s1.name = malloc(10);
strcpy(s1.name, "masters");
s2 = s1;
s1.name[2] = ‘P’;
s1.name[3] = ‘Q’;
printf("%s\n%s",s1.name,s2.name);
return 0;
}
Compare the output of prog 1 and prog 2.
Ans :  both are the same

2.
#include<stdio.h>
struct std
{
int a;
union unit
{
int a, b;
} u;
};
int main()
{
struct std s = {1, 2, 3};
printf("%d %d %d ", s.a, s.u.a, s.u.b);
return 0;
}
(a) 1 2 3
(b) 1 3 3
(c) 3 2 2
(d) 1 2 2
Ans : d
