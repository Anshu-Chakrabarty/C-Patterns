#include <stdio.h>
int main()
{
    int i;
    int j;
    int k;
    int side;
    printf("enter the value of side for the square \n");
    scanf("%d", &side);
    // loop for the column
    for(i=0; i<side ; i++){
        for(j=0; j<i; j++){
            printf(" ");
        }
            for(k=0; k<side; k++){
                printf("*");
            }
        
        printf("\n");
    }
    return 0;
}