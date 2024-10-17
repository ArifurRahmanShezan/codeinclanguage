//https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/G
#include<stdio.h>
int main(){
    int t,n;
    scanf("%d",&t);
    
    for(int i=0;i<t;i++){
        scanf("%d",&n);
    long long mul=1;    
    for(int i=1;i<=n;i++){
        mul=mul*i;
    }
    printf("%lld\n",mul);
    } 
}
