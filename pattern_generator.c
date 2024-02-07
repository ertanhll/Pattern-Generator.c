

#include <stdio.h>


int main() {
    
    int n;
    printf("Enter an odd number 1 to 9 inclusive: \n");
    scanf("%d",&n);
    
    int i,j;
    for(i=0;i<n/2;i++){
        for(j=i;j<n/2;j++)
            printf(" ");
            printf("%d\n",n);
        }
    i=0;
    while(i<=(n/2)){
        j=i;
        while(j>0){
            printf(" ");
            j--;
        }
            printf("%d\n",n);
        i++;
        }
    
    }
    
    

 



 

