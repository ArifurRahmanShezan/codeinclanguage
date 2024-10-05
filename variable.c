#include<stdio.h>

int main(){
int b,c;
float f;
double d;
char ch;
short int a=7;
scanf("%d  %c %f %lf",&b,&ch,&f,&d);
printf("a=%d b=%d c=%d char=%c",a,b,c,ch);
printf("\n %3f %2lf",f,d);
return 0;
}

/*format specifier
int %d
float %f
double %lf
long long %lld
long int %ld
char %c
long double %lf


unsigned int %u
unsigned short %hu
unsigned long int 5lu
unsigned long long int %llu
*/
