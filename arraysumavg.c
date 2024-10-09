#include<stdio.h>
int main(){
    int n;
    scanf("%d\n",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&a[i]);
    }
    int sum =0;
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    
    }
    printf("\n");
    for(int i=0;i<n;i++){
        sum+=a[i];
        
    }
    printf("%d \n",sum);
    double avg=(double)sum/n;
    printf("%lf",avg);

}