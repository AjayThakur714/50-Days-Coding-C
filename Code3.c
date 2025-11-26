#include<stdio.h>
int main(){
    int marks;
    printf("Enter your marks  : ");
    scanf("%d",&marks);


    if(marks < 30){
        printf("c\n");

    }else if (marks >=30 && marks < 90){
        printf("B \n");
    }else if (marks >=70 && marks < 90){

    }else {
        printf("A+\n");
    }
    return 0;
    }
