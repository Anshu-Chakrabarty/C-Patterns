#include <stdio.h>
int main()
{
    int i;
    int j;
    int k;
    int breadth;
    int length;
    printf("enter the value of side for the square \n");
    scanf("%d", &breadth);
    scanf("%d", &length);
    // loop for the column
    for(i=0; i<breadth ; i++){
        for(j=0; j<i; j++){
            printf(" ");
        }
            for(k=0; k<length; k++){
                printf("*");
            }
        
        printf("\n");
    }
    return 0;
}