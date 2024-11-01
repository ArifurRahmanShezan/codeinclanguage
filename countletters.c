//https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/J
#include<stdio.h>
#include<string.h>
char str[10000001];
int main(){
    
    scanf("%s",str);
    //printf("%s",str);
    int length=strlen(str);
    int count[26]={0};
    
    for(int i=0;i<length;i++){
        count[str[i]-'a']++;
    }
    for(char i='a';i<='z';i++){
        if(count[i-'a']!=0){
            printf("%c : %d\n",i,count[i-'a']);
        }
    }
}