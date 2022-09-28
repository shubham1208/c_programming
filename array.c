#include <stdio.h>
int main(){
    int arr[5][5] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
    int a = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}