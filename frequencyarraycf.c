//Given 2 numbers N, M and an array A of N numbers. 
//For every number from 1 to M, 
//print how many times this number appears in this array.

// Sample Input
// Sample output
// 10 5
// 1 2 3 4 5 3 2 1 5 3
// 1 appears 2 times
// 2 appears 2 times
// 3 appears 3 times
// 4 appears 1 times
// 5 appears 2 times
// Note:
// Numbers from 1 to 5 appearance are :
// 1 appears 2 times in the array .
// 2 appears 2 times in the array.
// 3 appears 3 times in the array.
// 4 appears once in the array.
// 5 appears 2 times in the array.

#include<stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    int count[m];
    for(int i=1;i<=m;i++){
        count[i]=0;
    }
    for(int i=0;i<n;i++){
        if(arr[i]>=1 && arr[i]<=m){
            count[arr[i]]++;
        }
    }
    for(int i=1;i<=m;i++){
        printf("%d %d\n",i,count[i]);
    }

}