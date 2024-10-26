//https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/D
#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    char b[100];
    scanf("%s\n%s",&a,&b);
    int lena=strlen(a);
    int lenb=strlen(b);
    printf("%d %d\n",lena,lenb);
    printf("%s%s\n",&a,&b);
    for(int i=0,j=0;i<lena;){
        int temp=a[0];
        a[0]=b[0];
        b[0]=temp;
        printf("%s %s\n",&a,&b);
        break;
    }

}