#include <stdio.h>

int main() {
    int a;
    int b;
    int c;
    printf("Enter a value for a:");
    scanf("%d",&a);
    printf("Enter a value for b:");
    scanf("%d",&b);
    printf("Enter a value for c:");
    scanf("%d",&c);
    int m=(a>b&&a>c)?a:(b>c)?b:c ;
    printf("%d",&m);
    return 0;
    
}
    