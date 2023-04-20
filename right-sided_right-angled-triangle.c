#include <stdio.h>
int main(){
    int n,choice;
    do{
    printf("enter the value of n \n");
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        for(int j=n-i-1; j>0 ; j--){
            printf(" ");
        }
        for(int j=0 ; j<=i ; j++){
            printf("*");
        }
        printf("\n");
    }
    printf("continue :1/0 \n");
    scanf("%d", &choice);
    }while(choice==0);
    printf("thanks");
    return 0;
}