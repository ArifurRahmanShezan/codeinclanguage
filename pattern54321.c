#include<stdio.h>
int main(){
    // for(int i=1;i<=5;i++){
    //     for(int j=i;j>=1;j--){
    //         printf("%d",j);
    //     }
    //     printf("\n");
    // }
    int n=5;
    for(int i=1;i<=n;i++){
        // for(int j=1;j<=n-i;j++){
        //     printf(" ");
        // }
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    //  for(int i=1;i<=n;i++){
    //     for(int j=1;j<i;j++){
    //         printf(" ");
    //     }
    //     for(int j=n;j>=i;j--){
    //         printf("%d",j);
    //     }
    //     printf("\n");
    // }
}