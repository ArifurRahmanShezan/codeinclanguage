//https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/K
#include <stdio.h>
#include <string.h>
int main() {
    int n;
    scanf("%d",&n);
    while (n--) {
        char s[55],t[55];
        scanf("%s %s",s,t);
        int lens=strlen(s);
        int lent=strlen(t);
        int minLen;
        if (lens<lent) {
            minLen=lens;
        } else {
            minLen=lent;
        }
        char result[105]; 
        int pos=0;     
        for (int i=0;i<minLen;i++) {
            result[pos++]=s[i]; 
            result[pos++]=t[i]; 
        }
        for (int i=minLen;i<lens;i++) {
            result[pos++]=s[i];
        }
        for (int i=minLen;i<lent;i++) {
            result[pos++]=t[i];
        }
        result[pos]='\0'; 
        printf("%s\n",result);
    }
}
