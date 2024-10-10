//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/E
#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int min=arr[0];
    int index=0;
    for(int i=0;i<N;i++){
        if(arr[i]<min){
            min=arr[i];
            index=i;
        }
    }
    printf("%d %d",min,index+1);
}