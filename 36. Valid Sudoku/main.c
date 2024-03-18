#include <stdio.h>
#include <string.h>

bool isValidSudoku(char** board, int boardSize, int* boardColSize) {
    // Initialize the 9x9 array to store the counts of each digit
    int counts[10] = {0};

    // Iterate over each row in the Sudoku board
    for (int i = 0; i < boardSize; i++) {
        // Iterate over each column in the current row
        for (int j = 0; j < boardColSize[i]; j++) {
            // If the current cell is not empty, increment the count of its digit
            if (board[i][j] != '.') {
                counts[board[i][j] - '0']++;
            }
        }
    }

    // Iterate over each 3x3 sub-box in the Sudoku board
    for (int i = 0; i < boardSize; i += 3) {
        for (int j = 0; j < boardColSize[i]; j += 3) {
            int rowStart = i * 3;
            int colStart = j * 3;
            // Iterate over each digit in the current sub-box
            for (int k = rowStart; k < rowStart + 3; k++) {
                for (int l = colStart; l < colStart + 3; l++) {
                    // If the current cell is not empty, increment the count of its digit
                    if (board[k][l] != '.') {
                        counts[board[k][l] - '0']++;
                    }
                }
            }
        }
    }

    // Check if any digit appears more than once in the Sudoku board
    for (int i = 1; i <= 9; i++) {
        if (counts[i] > 1) {
            return false;
        }
    }

    return true;
}