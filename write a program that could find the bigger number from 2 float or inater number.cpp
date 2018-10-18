#include<stdio.h>

int main()
{

    float a,b;

    printf("Enter First Number: ");
    scanf("%f",&a);

    printf("Enter Second Number: ");
    scanf("%f",&b);

    if(a!=b){
        if(a>b){
            printf("Your First Number %.2f is bigger then Second %.2f",a,b);
        }else{
            printf("Your Second Number %.2f is bigger then First %.2f",b,a);
        }
    }else{
        printf("Your both is equal ",a,b);
    }



    return 0;
}
