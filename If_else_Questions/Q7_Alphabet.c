#include <stdio.h>

int main(){
    char cha;
    scanf("%c",&cha);
    if(cha>=65 &&cha<=90 || cha>=97 &&cha<=122 ){
        printf("This is character");
    }
    else{
        printf("This is not a char");
    }
    return 0;
}