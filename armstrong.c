#include<stdio.h>
#include<math.h>
int main(){
    int num,original,rem,result=0,n=0;

    printf(" Enter an integer:");
    scanf("%d", &num);

    original = num;

    while(original !=0){
        original = original/10;
        n++;
    }

    original = num;

    while(original !=0){
        rem = original % 10;
        result = result + pow(rem,n);
        original= original / 10;
    }

    if(result == num){
        printf("the number %d is an armstrong number:",num);
    } else {
        printf("the number %d is not an armstrong number :",num);
    }

    return 0;

}