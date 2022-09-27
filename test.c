#include <stdio.h>
int main(){
    
    int a, j, b, n;
    
    printf("Enter number of elements in the array: ");
    scanf("%d", &b);
    printf("Enter the elements: \n");

    int arr[b];
    int length = sizeof(arr)/sizeof(arr[0]);


    for(int i = 0; i < b; ++i) {
        scanf("%d", &arr[i]);
    }
    
    printf("Displaying integers: \n");
    
    for(int i = 0; i < 5; ++i) {
        printf("%d\n", arr[i]);
    }


    printf("The Duplicated elements are: ");
    for(int i = 0; i < length; i ++){
        for(j = i+1; j<length; j++){
            if(arr[i] == arr[j]){
                printf("%d", arr[j]);
                printf(", ");
            }
        }
    }
return 0;
}
