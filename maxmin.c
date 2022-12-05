#include <stdio.h>

void func(int a, int b, int *large, int *small);
int main()
{
    int a, b, small, large;
    scanf("%d%d", &a, &b);

    func(a, b, &large, &small);
    printf("%d %d", large, small);
    return 0;
}
void func(int a, int b, int *large, int *small)
{
    *large = a > b ? a : b;
    *small = a < b ? a : b;
}