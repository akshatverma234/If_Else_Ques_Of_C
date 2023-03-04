#include <stdio.h>

int main(){
    int num;
    scanf("%d",&num);
    if(num%2==0){
        printf("Number is Even = %d",num);
    }
    else{
        printf("Number is Odd = %d ",num);
    }
    return 0;
}