#include <stdio.h>
int main()

{  
    int a;
    int b;
    printf("Enter length\n");
    scanf("%d",&a);
    printf("Enter width\n");
    scanf("%d",&b);
    int c = a*b;
    printf("The area is:%d\n",c);
    return 0;
}