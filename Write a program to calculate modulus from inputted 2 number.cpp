#include <stdio.h>

int main()
{
    int a;

    printf("Enter any number: ");
    scanf("%d",&a);

    int ans = a%2;

    if(ans<2 && ans>0){

        printf("%d is Odd Number: ",a);
    }else{
        printf("%d is Even Number: ",a);
    }

    return 0;
}
