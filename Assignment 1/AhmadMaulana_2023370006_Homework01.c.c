#include <stdio.h>

void Q1()
{
    //declaring variables
    const int notes[9] = {100000, 50000, 20000, 10000, 5000, 2000, 1000, 500, 100};
    const char *labels[9] = {"100,000", "50,000", "20,000", "10,000", "5000", "2000", "1000", "500", "100"};
    
    int money, number_of_bills;

    //scanning the inputs
    printf("Banknotes needed: ");
    scanf("%d", &money);

    //loops to print the denominations
    for (int i = 0; i < 9; i++)
    {
        number_of_bills = money / notes[i];
        printf("%s Rupiah notes: %d\n", labels[i], number_of_bills);
        money -= (notes[i] * number_of_bills);
    }
}

void Q2()
{
    //declaring variables
    int num, sum = 0;

    //scanning the input
    printf("Enter a three-digit number: ");
    scanf("%d", &num);

    //loops to adding the digits
    while (num != 0)
    {
        sum += (num % 10);
        num /= 10;
    }

    //printing out the sum
    printf("The sum of digits is: %d\n", sum);
}

void Q3()
{
    //declaring the variables
    unsigned int year;

    //scanning the inputs
    printf("Enter a year: ");
    scanf("%u", &year);

    //if else to decide to print whether a leap year or not
    if ((year % 4 == 0) && (year % 400 != 0))
    {
        printf("%u is a leap year.\n", year);
    }
    else
    {
        printf("%u is not a leap year.\n", year);
    }
}

void Q4()
{
    //declaring variables
    int array[5], total = 0;
    int small[2] = {2147483647, 2147483647}; // maximum int value   
    
    //scanning the inputs
    printf("Enter five integers: "); 
    
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &array[i]); //storing the inputs
        total += array[i];
        if (array[i] < small[0]) //sorting the largest numbers
        {
            small[1] = small[0];
            small[0] = array[i];
        }
        else if (array[i] < small[1])
        {
            small[1] = array[i];
        }
    }
    total -= (small[0] + small[1]); 

    //printing out the average
    printf("The average of the three largest numbers is : %d\n", total / 3);
}

void Q5()
{
    //declaring struct 
    struct Time
    {
        int hours, minutes, seconds;
    } start, end, delta;

    //scanning the hours minutes and seconds
    printf("Enter the first time (HH:MM:SS): ");
    scanf("%d:%d:%d", &(start.hours), &(start.minutes), &(start.seconds));

    printf("Enter the second time (HH:MM:SS): ");
    scanf("%d:%d:%d", &(end.hours), &(end.minutes), &(end.seconds));

    if (end.seconds < start.seconds) //if else to check whether the second time is lower than start so it can be added 60 or 24 for hours
    {
        end.minutes--;
        end.seconds += 60;
    }

    if (end.minutes < start.minutes)
    {
        end.hours--;
        end.minutes += 60;
    }

    if (end.hours < start.hours)
    {
        end.hours += 24;
    }
    
    //time difference
    delta.seconds = (end.seconds - start.seconds) % 60;
    delta.minutes = (end.minutes - start.minutes) % 60;
    delta.hours = (end.hours - start.hours) % 24;

    //printing out the time difference
    printf("The time difference is %d hour, %d minutes, and %d seconds.", delta.hours, delta.minutes, delta.seconds);
}

int main()
{
    printf("======== Question 1 =========\n");
    Q1();
    printf("======== Question 2 =========\n");
    Q2();
    printf("======== Question 3 =========\n");
    Q3();
    printf("======== Question 4 =========\n");
    Q4();
    printf("======== Question 5 =========\n");
    Q5();
}
