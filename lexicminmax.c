//https://www.hackerrank.com/contests/mid-term-1729629486/challenges/lexic-min-max
#include<stdio.h>
#include<string.h>
int main(){
    char s1[1005],s2[1005],s3[1005];
    scanf("%s %s %s",&s1,&s2,&s3);
    int comp1=strcmp(s1,s2);
    int comp2=strcmp(s2,s3);
    int comp3=strcmp(s1,s3);
    if(comp1<0){
        if(comp3<0){
            printf("%s\n",s1);
        }
        else{
            printf("%s\n",s3);
        }
    }
    else{
        if(comp2<0){
            printf("%s\n",s2);
        }
        else{
            printf("%s\n",s3);
        }
    }
    
    if(comp1>0){
        if(comp3>0){
            printf("%s\n",s1);
        }
        else{
            printf("%s\n",s3);
        }
    }
    else{
        if(comp2>0){
            printf("%s\n",s2);
        }
        else{
            printf("%s\n",s3);
        }
    }

}