#include <stdio.h>
#include <ctype.h>

int main()
{
    printf("*****-----Question 1-----*****\n");
    //code for question 1

    int num, reversed = 0, remainder, original;
    //stating variables

    printf("Enter a number: ");
    scanf("%d", &num);
    original = num;
    //input number

    //mirroring integer
    while(num != 0)
    {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    //if else statement to check whether the original number is the same as the mirrored one
    if(original == reversed)
    {
        printf("%d is a palindrome number.\n", original);
    }
    else
    {
        printf("%d is not a palindrome number.\n", original);
    }

    

    
    printf("*****-----Question 2-----*****\n");
    //code for question 2

    char line[150];
    int vowels = 0;
    //stating variables

    printf("Enter a string: ");
    fgets(line, sizeof(line), stdin);
    fgets(line, sizeof(line), stdin);
    //inputting characters into array line using fgets tool
    //put out the input twice because if not it will not be inputting

    //looping through all characters in array line
    for (int i = 0; line [i] != '\0'; i++)
    {
        //convert any characters into lowercase using tolower tool
        line [i] = tolower(line[i]);

        //check if the character is a vowel
        if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' || line[i] == 'o' || line[i] == 'u')
        {
            vowels++;
        }
    }

    //print out the vowel count
    printf("%d\n", vowels);
    



        
    printf("*****-----Question 3-----*****\n");
    //code for question 3
    
    int n, t1 = 0, t2 = 1, nextterm = 1;
    //stating the variables and the first two terms

    printf("Enter the number of terms: ");
    scanf("%d", &n);
    //inputting the number of terms

    //printing out the first two terms
    printf("Fibonacci Sequence: \n");
    printf("%d %d ", t1, t2);

    //printing out the 3rd to nth terms
    for (int i = 3; i <= n; i++)
    {
        printf("%d ", nextterm);
        t1 = t2;
        t2 = nextterm;
        nextterm = t1 + t2;
    }
    printf("\n");




    
    printf("*****-----Question 4-----*****\n");
    //code for question 4

    int n1, n2;
    char symbol;
    //stating the variables

    //inputting the first, second number, and the operator
    printf("Enter the first number: ");
    scanf("%d", &n1);
    printf("Enter the second number: ");
    scanf("%d", &n2);
    printf("Enter the operator (+, -, *, /): ");
    scanf(" %c", &symbol);

    //using case switch to determine what operator we use
    switch(symbol)
    {
        case '+':
            //addition
            printf("Result: %d + %d = %d\n", n1, n2, n1+n2);
            break;
        case '-':
            //substraction
            printf("Result: %d - %d = %d\n", n1, n2, n1-n2);
            break;
        case '*':
            //multiplication
            printf("Result: %d * %d = %d\n", n1, n2, n1*n2);
            break;
        case '/': 
            //division  
            printf("Result: %d / %d = %d\n", n1, n2, n1/n2);
            break;
        default:
            //default statement
            printf("Wrong operator\n");
            break;
    }
    
    



    printf("*****-----Question 5-----*****\n");
    //code for question 5

    int balance = 1000, deposit, withdraw, choice, pin;
    //stating the variables

    printf("Welcome to Simple ATM\n");
    
    while (pin != 1234)
    {

        printf("Enter your pin: ");
        scanf("%d", &pin);
        if (pin != 1234)
        {
            printf("Please enter valid pin.\n");
        }
        printf("\n");

    }
    //output welcome messages and input the pin
    
    //put out options
    printf("    1. Check balance\n");
    printf("    2. Deposit\n");
    printf("    3. Withdraw\n");
    printf("    4. Change pin\n");
    printf("    5. Exit\n");

    //asking which choice using while and case switch
    while(choice != 5)
    {
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch(choice)
        {
            case 1:
                //show current balance
                printf("Your current balance is $%d\n\n", balance);
                continue;
            
            case 2:
                //input the deposit into the balance and show the balance
                printf("Enter the amount you want to deposit: ");
                scanf("%d", &deposit);
                balance = balance + deposit;
                printf("$%d deposited successfully. Your new balance is $%d\n\n", deposit, balance);
                continue;
            
            case 3:
                //input the amount to withdraw and show the balance
                printf("Enter the amount to withdraw: ");
                scanf("%d", &withdraw);
                balance = balance - withdraw;
                printf("$%d withdrawn successfully. Your new balance is $%d\n\n", withdraw, balance);
                continue;

            case 4:
                //changing the pin
                printf("Enter your new pin: ");
                scanf("%d", &pin);
                printf("Pin changed successfully\n\n");
                continue;
            
            case 5:
                //output exit message
                printf("Thank you for using Simple ATM. Goodbye!\n");
                break;
            
            default:
                //default statement
                printf("Invalid choice\n");
                break;                
        }
    }


   return 0;
}
