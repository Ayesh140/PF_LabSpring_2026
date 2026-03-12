#include<stdio.h>
int main(){
    int array[]={1,2,3,4,5};
    int length=sizeof(array)/sizeof(array[0]);
    int lastElement=array[length-1];

    for(int i=length - 1; i > 0 ; i--){
        array[i] = array[i - 1];
    }
    array[0]=lastElement;
    for(int i=0; i<length; i++){
        printf("%d ", array[i]);
    }
    return 0;
}
