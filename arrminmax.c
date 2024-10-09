#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d\n",&n);
    int a[n];

    for (int i=0;i<n;i++){
        scanf("%d ",&a[i]);
    }
    int min=a[0],max=a[0];
    for(int i=0;i<n;i++){
        if(a[i]<min){  
            min=a[i];
        }
       
        if(a[i]>max){
            max=a[i];
        }
        
    }
    printf("Maximum %d\n",max);
    printf("Minimum %d\n",min);
}