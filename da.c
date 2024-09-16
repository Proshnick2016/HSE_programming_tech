#include <stdio.h>

int main(){
    int a,b;
    char operation;
    
    scanf("%d%c%d", &a, &operation, &b);

    if (operation=='+'){
        printf("%d", a+b);
    }else if (operation =='-'){
        printf("%d", a-b);
    }else if (operation == '*'){
        printf("%d", a*b);
    }else if (operation =='/'){
        printf("%d", a/b);
    }else{
        printf("This operation is not real :)");
    }
    
}