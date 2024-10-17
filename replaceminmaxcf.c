//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/M
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int min=arr[0],max=arr[0];
    int minpos=0,maxpos=0;
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
            minpos=i;
        }
        if(arr[i]>max){
            max=arr[i];
            maxpos=i;
        }
    

    }
        int temp;
        temp=arr[maxpos];
        arr[maxpos]=arr[minpos];
        arr[minpos]=temp;
       
    for(int i=0;i<n;i++){
         printf("%d ",arr[i]);
    }
}