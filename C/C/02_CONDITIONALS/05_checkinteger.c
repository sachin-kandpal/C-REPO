#include <stdio.h>

int main()
{
    float f; // if ye 3.1 hoya to
    printf("enter any real number : ");
    scanf("%f", &f);
    int x = (int)f; // ye 3 ban jayega
    // aur in dono ke difference se hame pta chalega kiye integer tha ya nhi
    float a = (float)x;
    if (x - f == 0)
    {
        printf("it was an integer\n");
        printf("Hamne iteger dala tha tabhi dono ka difference 0 hua ");
    }
    if (x - f != 0)
    {
        printf("it is not an integer\n");
        printf("iska difference 0 nhi tha to ye integer nhi tha");
    }
    return 0;
}

