#include<stdio.h>
int main(){
    int marks;
    scanf ("%d", &marks);
    if(marks>=50 && marks<=100){
        if(marks>=90 && marks<= 100){
            if (marks>=95){
                printf("Congratulations.You have got Scolarship\n");
            }
        printf("You have got A+\n");
    }
    else if(marks>=85 && marks<= 89){
        printf("You have got A\n");
    }
    else if(marks>=80 && marks<= 84){
        printf("You have got B+\n");
    }
    else if(marks>=75 && marks<= 79){
        printf("you have got B\n");
    }
    else if(marks>=70 && marks<= 74){
        printf("You have got C+\n");
    }
    else if(marks>=65 && marks<= 69){
        printf("You have got C\n");
    }
    else if(marks>=60 && marks<= 64){
        printf("You have got D+\n");
    }
    else if (marks>=50 && marks<= 59){
        printf("You have got D\n");
    }
    printf("You have passed");
    }
    
else if (marks>=0 && marks<=50){
        printf("You have got F\n");
        printf("You have failed.Try again");
}
else{
    printf("Invalid Number");
}
    return 0;
}