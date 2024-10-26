//https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/M
#include<stdio.h>
#include<string.h>
int main(){
    char s[10005]; 
    char target[]="hello";
    int j = 0;  
    int tlength=strlen(target);

    scanf("%s",s);
    int slength=strlen(s);

    for (int i=0;i<slength;i++) {
        if (s[i]==target[j]) {  
            j++; 
            if (j==tlength) { 
                printf("YES");
            }  
        }   
    }       
    if(j!=tlength){
            printf("NO");
    }
}