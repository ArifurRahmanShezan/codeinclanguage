#include<stdio.h>
int main(){
    int a[1000];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
    }
    printf("\n");
    int index,value;
    scanf("%d %d",&index,&value);
    n++;

    for(int i=n-1;i>=index;i--){
        a[i+1]=a[i];
    }
    a[index]=value;
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
    }


}