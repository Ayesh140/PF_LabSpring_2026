#include<stdio.h>
int main(){
    int length=10;
    int array[length]; 
    int numberSearch, count=0;
    printf("Enter 10 numbers: \n");
    for(int i = 0; i < length; i++) {
        scanf("%d", &array[i]);
    }
    printf("Enter the number you want to search for: ");
    scanf("%d", &numberSearch);

    for(int i=0; i<length; i++){
        if(array[i]==numberSearch){
            count++;
        }
    }
        if(count>0){
            printf("The number %d occurded %d times.\n", numberSearch,count);
        }
        else{
            printf("The number was not found\n");
        }
        return 0;
    }


//Write a program that reads the 10 numbers from user and 
//store these numbers into an array of same size
//Your  program should provide a searching mechanism in such a way that 
//how many times a particular number occurred
//and then print it on screen. 
//If number is not in array, then program should display a message “number not found”.

