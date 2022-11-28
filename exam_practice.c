// #include <stdio.h>
// int main(){
//     int units;
//     float price;
//     printf("enter the unit of electricity: ");
//     scanf("%d", &units);
//     if(units < 50){
//         price = units*0.50;
//     }    
//     else if(units < 150){
//         price = units*0.75;
//     }
//     else if(units < 250){
//         price = units*1.2;
//     }
//     else if(units > 250){
//         price = units*1.5;
//     }
//     if(price > 300){
//         price = (0.1*price)+price;
//     }
//     printf("Electricity bill: %.2f", price);
//     return 0;
// }
#include <stdio.h>
int main(){
    // int a;scanf("%d", &a);for(int i = a; i > 0; i--){printf("\n");for(int j = 0; j < i; j ++){printf("%d ", i);}}
    // char a[100];
    // gets(a);
    // printf("%s", a);
    // if()
    char c, a[200] = "the quick brown fox jumps over the lazy dog";
    int count = 0;
    for(c = 'a'; c <= 'z'; ++c){
        for(int i = 0; i <= strlen(a); i++){
            if(c == a[i]){
                count++;
            }
            if(a[i] == ' '){
                printf("a");
            }
        }
    }
    printf("%d",  count);
}