#include <cstdio>
int absolute_value(int x) {
 // Your code here
    if (x>=0){
        return x;
    }else if (x<0){
        return x*-1;
    }
    return x;
}

int sum(int num1 , int num2) {
    return num1+num2;
}

int main() {
 int my_num = -84;
 printf("The absolute value of %d is %d.\n", my_num,
 absolute_value(my_num));
 int num1 = 32;
 int num2 = 5;
 printf("The sum of %d and %d is %d.\n",num1,num2,sum(num1,num2));
}