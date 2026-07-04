#include<stdio.h>
#include<math.h>
float area(float);
void main()
{
    float r,result;
    printf("Enter the radius of a circle:");
    scanf("%f",&r);
    result=area(r);
    printf("Area of circle is:%f",result);
}
float area(float r)
{
    float res;
    res=3.1416 * pow(r,2);
    return res;
}