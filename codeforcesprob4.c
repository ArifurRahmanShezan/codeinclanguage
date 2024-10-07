// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/B
#include<stdio.h>
int main(){
    int N,i;
    scanf("%d",&N);
    for(i=2;i<=N;i++){
        if(i%2==0){
            printf("%d \n",i);
            //ntinue;
        }
        
    }
    if(N==1){
            printf("-1");
            //break;
        }
}

