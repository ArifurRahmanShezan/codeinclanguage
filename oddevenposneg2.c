#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int evencount=0;
    int oddcount=0;
    int poscount=0;
    int negcount=0;
    for(int i=0;i<N;i++){
        int x;
        scanf("%d",&x);
        //printf("%d ",x);

        if(x%2==0){
            evencount++;
        }
        else{
            oddcount++;
        }
        if(x>0){
            poscount++;
        }
        else if(x<0){
            negcount++;
        }
       
    }
    printf("Even number is:%d\n",evencount);
    printf("Odd number is:%d\n",oddcount);
    printf("Positive number is:%d\n",poscount);
    printf("Negative number is:%d\n",negcount);
}
