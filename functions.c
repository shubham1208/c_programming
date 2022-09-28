#include <stdio.h>
//calc
void add(int x, int y){
    printf("%d\n", x+y);
}
void sub(int x, int y){
    printf("%d\n", x-y);
}
void mult(int x, int y){
    printf("%d\n", x*y);
}
void div(int x, int y){
    printf("%d\n", x/y);
}

int main(){
    int x, y;
    char * a;
    printf("Enter the first number: ");
    scanf("%d", &x);

    printf("Enter the second number: ");

    scanf("%d", &y);

    printf("Enter a Function (+, -, /, *): ");
    scanf("%s", a);

    if(a == "+"){
        printf("%d, %d ", x, y);
    }
    if(a == "-"){
        sub(x, y);
    }
    if(a == "*"){
        mult(x, y);
    }
    if(a == "/"){
        div(x, y);
    }

    return 0;
}