// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/D
#include<stdio.h>
int main(){
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    //printf("%d %d %d %d",a,b,c,d);
    if(d==a+b-c){
        printf("YES");
    }
    else if(d==a+b*c){
        printf("YES");
    }
    else if(d==a-b+c){
        printf("YES");
    }
    else if(d==a-b*c){
        printf("YES");
    }
    else if(d==a*b+c){
        printf("YES");
    }
    else if(d==a*b-c){
        printf("YES");
    }
    else{
        printf("NO");
    }

}