//https://www.hackerrank.com/contests/b6-assignment-03-c/challenges/count-in-matrix
#include<stdio.h>
int main(){
    int n,m,x;
    scanf("%d %d %d",&n,&m,&x);
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int arr2[x];

    for(int i=0;i<x;i++){
        scanf("%d",&arr2[i]);
    }
    for(int i=0;i<x;i++){
        int count=0;
        for(int j=0;j<n;j++){
            for(int k=0;k<m;k++){
                if(arr[j][k]==arr2[i]){
                count++;
                }
            }    
        }
        printf("%d\n",count);        
    }

}