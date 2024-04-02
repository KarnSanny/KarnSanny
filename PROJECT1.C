#include<stdio.h>
#include<conio.h>

int main() {
    int currentDay, currentMonth, currentYear;
    int birthDay, birthMonth, birthYear;
    int calculatedDay, calculatedMonth, calculatedYear;
clrscr();
    // Input current date
    printf("Enter the current date (DD MM YYYY): ");
    scanf("%d %d %d", &currentDay, &currentMonth, &currentYear);

    // Input birth date
    printf("Enter your birth date (DD MM YYYY): ");
    scanf("%d %d %d", &birthDay, &birthMonth, &birthYear);

    // Calculate age
    if (birthDay > currentDay) {
	// borrow days from next month
	currentDay += 30; // Assuming all months have 30 days for simplicity
	currentMonth -= 1;
    }
    calculatedDay = currentDay - birthDay;

    if (birthMonth > currentMonth) {
	// borrow months from next year
	currentMonth += 12;
	currentYear -= 1;
    }
    calculatedMonth = currentMonth - birthMonth;

    calculatedYear = currentYear - birthYear;

    // Output the calculated age
    printf("You are %d years, %d months and %d days old.\n", calculatedYear, calculatedMonth, calculatedDay);
   getch();
    return 0;
}
