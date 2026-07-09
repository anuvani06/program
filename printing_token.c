#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char s[1000]; 
    scanf("%[^\n]%*c", s); 
    int i;
    for(i = 0; s[i] != '\0'; i++)
    {
        if(s[i] == ' ')
        {
            printf("\n");
            continue;
        }
        printf("%c", s[i]);
    }
    return 0;
}
