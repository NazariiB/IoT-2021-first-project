#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool cheking_fun(char *arr) {
    int tempStrLen = strlen(arr), sum_o = 0, sum_x = 0;
    for (int x = 0; x <= tempStrLen - 1; x++)
    {
        if (arr[x] == 'o' || arr[x] == 'O') {
            sum_o++;
            
        }
        else if (arr[x] == 'x' || arr[x] == 'X') {
            sum_x++;
            
        }
    }
    if (sum_o == sum_x) {
        return true;
        
    }
    else {
        return false;
        
    }
}

int main(void)
{
    char arr[128];
    puts("Enter an array:");
    gets(arr);
    cheking_fun(arr);
    if (cheking_fun(arr)) printf("true");
    else printf("false");
    return 0;
} 