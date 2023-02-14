#include <stdio.h>
#include <string.h>

int main()
{
    int num;
    char stringarray[16];
    printf("input\n");
    scanf("%d\n %s", &num, &stringarray);
    int len= strlen(stringarray);

    if (0 <= num && num <= 10 && 0 <= len && len <= 15)
    {
        printf("%d\n %s\n ", 2 * num, stringarray);
    }
    return 0;
}