#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
    int a,s=0;
    scanf("%d",&a);
    int n[1000];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&n[i]);
        s+=n[i];
    }
    printf("%d",s);
    return 0;
}
