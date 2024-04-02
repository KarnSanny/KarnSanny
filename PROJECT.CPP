#include <iostream.h>
#include <conio.h>
#include <stdlib.h>

int main() {
    char choice;
    clrscr(); // Clear the screen

    // Introduction
    cout << "Welcome to the Forest Adventure Game!\n";
    cout << "Enter your name: ";
    char playerName[20];
    cin >> playerName;
    cout << "Hello, " << playerName << "! You find yourself in a dense forest.\n";
    cout << "You see two paths ahead. Which way do you want to go? (L/R): ";
    cin >> choice;

    // Decision making
    if (choice == 'L' || choice == 'l') {
        cout << "You chose to go left.\n";
        cout << "As you walk further, you encounter a river. Do you swim across or find another way? (S/F): ";
        cin >> choice;
        if (choice == 'S' || choice == 's') {
            cout << "You decided to swim across the river. You made it safely to the other side!\n";
        } else if (choice == 'F' || choice == 'f') {
            cout << "You found a bridge and crossed the river safely!\n";
        } else {
            cout << "Invalid choice! You got lost in the forest.\n";
        }
    } else if (choice == 'R' || choice == 'r') {
        cout << "You chose to go right.\n";
        cout << "After walking for a while, you stumble upon a hidden treasure! Congratulations!\n";
    } else {
        cout << "Invalid choice! You got lost in the forest.\n";
    }

    // End of the game
    cout << "Thanks for playing, " << playerName << "!\n";
    getch(); // Wait for a key press
    return 0;
}
