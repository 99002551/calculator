#include <calculator_operations.h>
int main()
{

    int choice;
    float input1,input2,result;

    printf("Enter the choice\n :");
    printf("Enter 1 for addition\n2 for subtraction \n3 for multiplication \n4 for division");
    printf("Enter 5 for squareroot\n");
    printf("Enter 6 for sine\n");
    printf("Enter 7 for cosine\n");
    printf("Enter 8 for tangent\n");
    

    scanf("%d",&choice);
    
    if(choice == 0)
    {exit(0);
    }
    #selection of the various operations
    switch(choice) {
    case 1:
    printf("Enter first number");
    scanf("%f",&input1);
    printf("Enter second number");
    scanf("%f",&input2);
    result=add(input1,input2);
    printf("%0.4 f",result);
    break;

    case 2:
    printf("Enter first number");
    scanf("%f",&input1);
    printf("Enter second number");
    scanf("%f",&input2);
    result=sub(input1,input2);
    printf("%0.4 f",result);
    break;

    case 3:
    printf("Enter first number");
    scanf("%f",&input1);
    printf("Enter second number");
    scanf("%f",&input2);
    result=mul(input1,input2);
    printf("%0.4 f",result);
    break;

   
    
    case 4:
    printf("Enter first number");
    scanf("%f",&input1);
    printf("Enter second number");
      scanf("%f",&input2);
    result=div(input1,input2);
    printf("%0.4 f",result);
    break;
    
    
    case 5:
    printf("Enter first number");
    scanf("%f",&input1);
    printf("Enter second number");
      scanf("%f",&input2);
    result=squareroot(input1,input2);
    printf("%0.4 f",result);
    break;
    
    
    case 6:
    printf("Enter first number");
    scanf("%f",&input1);
    printf("Enter second number");
      scanf("%f",&input2);
    result=sine(input1,input2);
    printf("%0.4 f",result);
    break;
    
    
    case 7:
    printf("Enter first number");
    scanf("%f",&input1);
    printf("Enter second number");
      scanf("%f",&input2);
    result=cosine(input1,input2);
    printf("%0.4 f",result);
    break;
    
    
    case 8:
    printf("Enter first number");
    scanf("%f",&input1);
    printf("Enter second number");
      scanf("%f",&input2);
    result=tagent(input1,input2);
    printf("%0.4 f",result);
    break;
    
    
    
