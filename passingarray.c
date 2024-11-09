#include<stdio.h>
int func(int x[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=x[i];
    }
    return sum;
}     
int main(){
    int a[10]={1,2,3};
    int res=func(a,10);
    printf("%d",res);
}