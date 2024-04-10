#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

// Function to generate computer's choice
int generateComputerChoice() {
    return rand() % 3 + 1; // Generate a random number between 1 and 3
}

// Function to determine the winner of a round
// Returns 0 for a draw, 1 for player win, 2 for computer win
int determineWinner(int playerChoice, int computerChoice) 
{
    if (playerChoice == computerChoice)
        return 0; // Draw
    else if ((playerChoice == 1 && computerChoice == 3) || 
            (playerChoice == 2 && computerChoice == 1) ||
            (playerChoice == 3 && computerChoice == 2))
        return 1; // Player wins
    else
        return 2; // Computer wins
}
int main() 
{
    srand(time(0)); // Seed the random number generator

    int playerPoints = 0;
    int computerPoints = 0;
    int level = 1;

    cout << "Welcome to Rock-Paper-Scissors game!\n";
    cout << "Level " << level << endl;
    while (playerPoints < 5 && computerPoints < 5) {
        // Player's choice
        int playerChoice;
        cout << "Enter your choice (1 for Rock, 2 for Paper, 3 for Scissors): ";
        cin >> playerChoice;

        // Validating player's choice
        while (playerChoice < 1 || playerChoice > 3) {
            cout << "Invalid choice! Please enter 1, 2, or 3: ";
            cin >> playerChoice;
        }

        // Computer's choice
        int computerChoice = generateComputerChoice();

        // Determine the winner
        int winner = determineWinner(playerChoice, computerChoice);

        // Display the choices
