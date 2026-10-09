# include<stdio.h>
int main(){

    // Write a C program that accepts two integers from the user and displays their sum, difference, and product.
     int a;
     int b;
     // input section 
     printf("Enter the value of a:");
     scanf("%d",&a);
     printf("Enter the value of b:");
     scanf("%d", &b);
     // calculation section 
     int sum = a + b;
     int difference = a - b;
     int product = a * b;
     // out put section 
     printf("Simple calculator\n");
     printf("The sum of two inegers is: %d\n ", sum);
     printf("The difference of two integers is: %d\n", difference);
     printf("The product of two intgers is :%d\n ", product);


    return 0;

}

    
      
       
    


    
