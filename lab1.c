#include <stdio.h>
#include <math.h>
int main()
{
    float x, y, z;
    printf("Enter x -> ");
    scanf("%f", &x);
    printf("Enter y -> ");
    scanf("%f", &y);
    printf("Enter z -> ");
    scanf("%f", &z);
    if ((x > y + z) && ((y - z != x) || (z - y != x)))
    {
        printf(&x);
    }
    else
    {


        if ((y > x + z) && ((x - z != y) || (z - x != y)))
        {
            printf(&y);
        }
        else
        {
            if ((z > y + x) && ((y - x != z) || (x - y != z)))
            {
                print(&z);
            }
            else
            {
                printf("the data is not suitable for the task.")
            }
        }
    }
    return0;


}
