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

