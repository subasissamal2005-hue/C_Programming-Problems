#include<stdio.h>

int calculate_square(int side);

int main(){
    int side;
    printf("enter a side:");
    scanf("%d",&side);

    printf("side is : %d",calculate_square(side));
    return 0;
}

int calculate_square(int side){
    return side * side;
}
