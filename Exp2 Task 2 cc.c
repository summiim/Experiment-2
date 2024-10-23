#include<stdio.h>
//Name: Mirza Sumaiya Shakil Ahmed
//UIN:241A014
//Branch: AIDS
//Roll no:14

int main() {
    int low_range, high_range, remainder, sum = 0, odd_num;

    printf("***** Sum of odd numbers *****\n\n");


    printf("Enter the low end of the range: ");
    scanf("%d", &low_range);

    printf("Enter the high end of the range: ");
    scanf("%d", &high_range);


    if (low_range < high_range) {

        for (odd_num = low_range; odd_num <= high_range; odd_num++) {

            remainder = odd_num % 2;
            if (remainder != 0) {
                sum = odd_num+sum;
            }
        }

        printf("The sum of all odd numbers in the given range of %d to %d is: %d\n", low_range, high_range, sum);
    } else {

        printf("Invalid range The low range must be greater the high range");
    }

    return 0;
}
