#include <stdio.h>

int main(){
    printf("-----Factorial-----");
    int num = 0;
    int result = 0;
    int var = 0;

    scanf("%d", &num);

    for (int i = 0; i < num; i++){
        
        if(var == 0){
            var = num - i;
        }
        if(var > 0){
            var = num - i;
        }

        num = var * num;
        result = num;
    }
    printf("%d", result);
}