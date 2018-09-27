#include <stdio.h>

void afficher(int a)
{
    printf("%d\n", a);

}

void afficher(double a)
{
    printf("%lf\n", a);
    
}

int main(int , char **)
{
    afficher(1);
    afficher(2.0);
    return 0;
}