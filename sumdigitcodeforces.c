//Given a number N. Now, Print the summation of all digits.
//input 13305   output 12
//1 + 3 + 3 + 0 + 5 = 12 .
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int sum=0;
    while(n>0){
        int digit=n%10;
        n=n/10;
        sum=sum+digit;
        
    }
    printf("%d",sum);

}