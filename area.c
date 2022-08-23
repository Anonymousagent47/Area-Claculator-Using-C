#include<stdio.h>
#include<math.h>
float square(float side);
float circle(float rad);
float rectangle(float a, float b);
int main()
{
    float side,rad,a,b;
    char ch;
    printf("Welcome to Area Calculator !!\n");
    printf("-: 'S' for Square || 'C' for Circle || 'R' for Ractangle :-\n");
    printf("Enter Your Choice :");
    scanf("%c",&ch);
    if(ch == 'S'){
         square(side);
    }else if(ch == 'C'){
         circle( rad);
    }else if (ch == 'R')
    {
        rectangle( a, b);
    }else{
        printf("Enter Valid Argument!!");
    }
    


    return 0;
}

float square(float side){
    float ans;
    printf("Enter Value of Side: ");
    scanf("%f",&side);
    ans = side * side;
    printf("your answer is %f",ans);
}

float circle(float rad){
    float ans;
    printf("enter value Of Radius: ");
    scanf("%f",&rad);
    ans = 3.14 * rad * rad;
    printf("your answer is %f",ans);
}

float rectangle(float a,float b){
    float ans;
    printf("Enter Value of A side: ");
    scanf("%f",&a);
    printf("Enter value of B side: ");
    scanf("%f",&b);
    ans = a * b;
    printf("your answer is %f",ans);
}