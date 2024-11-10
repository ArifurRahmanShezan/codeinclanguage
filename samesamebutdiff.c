//https://www.hackerrank.com/contests/b6-final-c/challenges/same-same-but-different-1-1
#include<stdio.h>
#include<string.h>
int main(){
    char s1[105];
    char s2[105];
    char s3[105];
    scanf("%s",&s1);
    scanf("%s",&s2);
    scanf("%s",&s3);

    int length=strlen(s1);
    int count=0;
    for(int i=0;i<length;i++){
        if(s1[i]==s2[i]&&s2[i]==s3[i]){
            continue;
        }
        else if(s1[i]==s2[i]||s1[i]==s3[i]||s2[i]==s3[i]){
            count+=1;
        }
        else{
            count+=2;
        }
    }
    printf("%d",count);
}