#include <iostream>
#include <vector>
#include <algorithm>
#include <random>  // Include the <random> header
#include <ctime>

const int ROWS = 5;
const int COLS = 5;

// Function to display the Bingo card
void displayCard(const std::vector<std::vector<int>>& card) {
    std::cout << "---------------------\n";
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            if (card[i][j] == -1) {
                std::cout << "|  ";
            } else {
                std::cout << "| " << (card[i][j] < 10 ? " " : "") << card[i][j];
            }
        }
        std::cout << "|\n---------------------\n";
    }
}

// Function to check if a Bingo card has a winning pattern
bool checkWin(const std::vector<std::vector<int>>& card) {
    // Check rows and columns
    for (int i = 0; i < ROWS; ++i) {
        bool rowWin = true;
        bool colWin = true;
        for (int j = 0; j < COLS; ++j) {
            if (card[i][j] != -1) {
                rowWin = false;
            }
            if (card[j][i] != -1) {
                colWin = false;
            }
        }
        if (rowWin || colWin) {
            return true;
        }
    }

    // Check diagonals
    bool diag1Win = true;
    bool diag2Win = true;
    for (int i = 0; i < ROWS; ++i) {
        if (card[i][i] != -1) {
            diag1Win = false;
        }
        if (card[i][COLS - i - 1] != -1) {
            diag2Win = false;
        }
    }
    if (diag1Win || diag2Win) {
        return true;
    }

    return false;
}

// Function to initialize the Bingo card
std::vector<std::vector<int>> initializeCard() {
    std::vector<std::vector<int>> bingoCard(ROWS, std::vector<int>(COLS, -1));

    for (int i = 0; i < COLS; ++i) {
        std::vector<int> column;
        for (int j = 1; j <= ROWS; ++j) {
            column.push_back(j + i * ROWS);
        }

        // Use std::shuffle with std::default_random_engine
        std::shuffle(column.begin(), column.end(), std::default_random_engine(std::time(0)));

        for (int j = 0; j < ROWS; ++j) {
            bingoCard[j][i] = column[j];
        }
    }

    return bingoCard;
}

int main() {
    // Generate a Bingo card
    std::vector<std::vector<int>> bingoCard = initializeCard();

    // Display the Bingo card
    std::cout << "Welcome to Bingo!\nYour Bingo card:\n";
    displayCard(bingoCard);

    // Play the game
    int calledNumber;
    std::cout << "\nCalling out numbers...\n";

    while (true) {
        // Simulate calling out a number (you can replace this with actual user input)
        calledNumber = std::rand() % (ROWS * COLS) + 1;

        std::cout << "Calling: " << calledNumber << "\n";

        // Check if the number is on the card and mark it
        for (int i = 0; i < ROWS; ++i) {
            for (int j = 0; j < COLS; ++j) {
                if (bingoCard[i][j] == calledNumber) {
                    bingoCard[i][j] = 0;
                    break;
                }
            }
        }

        // Display the updated card
        displayCard(bingoCard);

        // Check for a win
        if (checkWin(bingoCard)) {
            std::cout << "BINGO! You win!\n";
            break;
        }
    }

    return 0;
}

