//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/B
#include<stdio.h>

int main(){
    int N,X;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&X);
    int flag=0;

    for(int i=0;i<N;i++){
        if(X==arr[i]){
            printf("%d",i);
            flag=1;
            break;
        }
              
    }
    if(flag==0 ){
        printf("-1");
    }
}