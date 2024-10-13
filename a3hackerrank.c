//https://www.hackerrank.com/contests/c-week-1-a-assignment-2/challenges/zeros-and-ones-02
#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for (int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int X;
    scanf("%d",&X);
    for(int i=0;i<N;i++){
        if(X== i+1){
            if(arr[i]==0){
                arr[i]=1;
            }
            else if(arr[i]==1){
                arr[i]=0;
            }
        }
    }
    for(int i=0;i<N;i++){
        printf("%d ",arr[i]);
    }
}