/* Write a function that receives marks received by a student in 3 subjects
and returns the total and percentage of these marks. Call this function from
main( ) and print the results in main() */

#include<stdio.h>
void func(int a, int b, int c, float *avg, float *per);  // here we create a function that take 3 values and average and percentange according to that
void main()
{
    int a, b, c;
    float avg, per;

    printf("Enter the marks of subject 1: ");
    scanf("%d", &a);
    printf("Enter the marks of subject 2: ");
    scanf("%d", &b);
    printf("Enter the marks of subject 3: ");
    scanf("%d", &c);

    func(a, b, c, &avg, &per);

    printf("\n The Average: %.2f", avg);
    printf("\n The Percentage: %.2f%%", per);
}

void func(int a, int b, int c, float *avg, float *per)
{
    *avg = (a+b+c)/3.0;
    *per = ((a+b+c)/300.0)*100;
}
