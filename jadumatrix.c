//https://www.hackerrank.com/contests/b6-final-c/challenges/jadu-matrix
#include<stdio.h>
int p_diagonal(int n,int arr[n][n]){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                if(arr[i][j]!=1){
                    return 0;
                }
            }
            else if(i+j==n-1){
                continue;
            }
            else{
                if(arr[i][j]!=0){
                    return 0;
                }
            }
        }
    }
    return 1;
}
int s_diagonal(int n,int arr[n][n]){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                continue;
            }
            else if(i+j==n-1){
                if(arr[i][j]!=1){
                    return 0;
                }
            }
            else{
                if(arr[i][j]!=0){
                    return 0;
                }
            }
        }
    }
    return 1;
}
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    if (n != m) {
        printf("NO\n");
        return 0;
    }
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }

    }
    if(p_diagonal(n,arr)&& s_diagonal(n,arr)){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
}