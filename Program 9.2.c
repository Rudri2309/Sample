#include<stdio.h>
#include<math.h>
float ar(float, float, float);
float Sp(float, float, float);
int main()
{
    float area, a, b, c;
    printf("\nEnter a : ");
    scanf("%f", &a);
    printf("\nEnter b : ");
    scanf("%f", &b);
    printf("\nEnter c : ");
    scanf("%f", &c);
    if (a + b >c && b + c >a && a + c>b)
    {
        area = ar(a, b, c);
        printf("\n\nArea of the triangle : %.2f", area);
    }
    else
        printf("\n\nThe triangle you entered is invalid.");
    getch();
    return 0;
}
float ar(float a, float b, float c)
{
    float area;
    float S = Sp(a,b,c);
    area = sqrt(S*(S - a)*(S - b)*(S - c));
    return (area);
}
float Sp (float a, float b, float c)
{
    float S;
    S = (a+b+c)/2;
    return S;
}
