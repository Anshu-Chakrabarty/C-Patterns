#include <stdio.h>
int main()
{
    int i;
    int j;
    int side;
    printf("enter the value of side for the square \n");
    scanf("%d", &side);
    // loop for the column
    for (int i = 0; i < side; i++)
    {
        // loop for the row
        for (int j = 0; j < side; j++)
        {
            //to print the boundary of the square
            if (i == 0 || i == side - 1 || j == 0 || j == side - 1)
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