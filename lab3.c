#include <stdio.h>
#include <stdbool.h>
#include <string.h>
char abc[128];

bool bbb(void) {
    int tempStrLen = strlen(abc), sum_o = 0, sum_x = 0;
    for (int x = 0; x <= tempStrLen - 1; x++)
    {
        if (abc[x] == 'o') sum_o++;
        else if (abc[x] == 'x') sum_x++;
    }
    if (sum_o == sum_x) return true;
    else return false;
}

int main(void)
{
    puts("Enter an array:");
    gets(abc);
    bbb();
    if (bbb()) printf("true");
    else printf("false");
    return 0;
}