//https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/I
#include<stdio.h>
#include<string.h>
int main(){
    char str[1000];
    scanf("%s",str);
    int len=strlen(str);
    int palindrome=1;
    for(int i=0,j=len-1;i<=j;i++,j--){
        if(str[i]!=str[j]){
            palindrome=0;
            break;
        }
    }
    if(palindrome==0){
        printf("NO");
    }
    else{
        printf("YES");
    }
}