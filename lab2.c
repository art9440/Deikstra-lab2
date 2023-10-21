#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <malloc.h>


int CheckforErrors(char *str){
    for (int i = 0;i < strlen(str); i++)
        if (!(str[i] >= "0" && str[i] <= "9") || str[i] == str[i + 1])
            return 0;
    return 1;
}

int main(){
    char str[10];
    int n;
    gets(str);
    scanf("%d", &n);
    if (CheckforErrors(str) == 0){
        printf("bad input");
        return 0;
    }
    return 0;

}
