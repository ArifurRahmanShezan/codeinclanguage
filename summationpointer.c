//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/A
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int *arr=(int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(arr==NULL){
        return 0;
    }
    long long sum=0;
    int *ptr=arr;
    for(int i=0;i<n;i++){
        sum+=*ptr;
        ptr++;
    }
    if(sum<0){
        printf("%lld",-sum);
    }
    else{
        printf("%lld",sum);
    }
    
    free(arr); 
    
}