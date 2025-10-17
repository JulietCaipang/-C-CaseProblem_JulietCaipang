#include <stdio.h>
int main(){

    char name[] = "Juliet T. Caipang";
    char schoolID[] = "2025303917";
    float grade;

    printf("===Conditional Logic Pass/Fail===\n");
    printf("Complete Name: %s\n", name);
    printf("School ID Number: %s\n", schoolID);
    printf("===============================\n");

    printf("Enter a grade (0-100): ");
    scanf("%f", &grade);

    
    printf("Result: ");
    if (grade >= 90 && grade <= 100){
        printf("Excellent (Pass)\n");
    } else if (grade >= 80 && grade <= 90){
        printf("Very Good (Pass)\n");
    } else if (grade >= 75 && grade <= 80){
        printf("Good (Pass)\n");
    } else if (grade >= 60 && grade <= 74){
        printf("Fail"); 
    } else {
        printf("Invalid grade");
    }


    printf("Enter a grade (0-100): ");
    scanf("%f", &grade);

    printf("Result: ");
    if (grade >= 90 && grade <= 100){
        printf("Excellent (Pass)\n");
    } else if (grade >= 80 && grade <= 90){
        printf("Very Good (Pass)\n");
    } else if (grade >= 75 && grade <= 80){
        printf("Good (Pass)\n");
    } else if (grade >= 60 && grade <= 74){
        printf("Fail"); 
    } else {
        printf("Invalid grade");
    }


    return 0;

}