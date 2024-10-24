//https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/G
#include<stdio.h>
#include<string.h>
int main() {
    char S[100000];  
    scanf("%s", S);  
    int len = strlen(S);  
    for(int i = 0; i < len; i++) {
        if(S[i] == ',') {
            printf(" ");
        } else if(S[i] >= 'A' && S[i] <= 'Z') {
            printf("%c", S[i] + 32);
        } else if(S[i] >= 'a' && S[i] <= 'z') {
            printf("%c", S[i] - 32);
        } else {
            printf("%c", S[i]);
        }
    }
}