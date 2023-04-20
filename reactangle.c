#include <stdio.h>
int main()
{
    int i;
    int j;
    int length, breadth;
    printf("enter the value of length \n");
    printf("enter the vaue of breadth \n");
    scanf("%d", &length);
    scanf("%d", &breadth);
    // loop for the column
    for (int i = 0; i < length; i++)
    {
        // loop for the row
        for (int j = 0; j < breadth; j++)
        {
            //to print the boundary of the square
            if (i == 0 || i == length - 1 || j == 0 || j == breadth - 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}