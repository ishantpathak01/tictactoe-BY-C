Overview

This is a classic Tic Tac Toe game implemented in C using the Windows console.
It allows two players to play on the same computer, with colorful markers and an interactive board display.

Player 1 uses X (Red)

Player 2 uses O (Green)

Unmarked cells display numbers 1-9 for easy selection.

Features

Colorful console output for players and numbers.

Real-time board updates after each move.

Automatic win and draw detection.

Input validation to prevent invalid moves.

Runs smoothly in Dev-C++ or any Windows C compiler.

How to Play

Launch the game.

The board displays numbers 1-9 for empty cells:

 1 | 2 | 3
___|___|___
 4 | 5 | 6
___|___|___
 7 | 8 | 9
   |   |  


Players take turns entering a number corresponding to the cell where they want to place their mark (X or O).

The game updates the board and checks for:

Win: Three same marks in a row, column, or diagonal.

Draw: All cells filled without a winner.

When the game ends, a message appears:

Player X WINS! or It's a DRAW!.

Controls

Enter a number (1-9) to place your mark.

The game alternates automatically between Player 1 and Player 2.

Invalid moves are rejected with a warning message.

Code Structure

main() → Handles the game loop, player turns, and input.

printBoard() → Displays the game board with colors for X, O, and numbers.

printXO(char c) → Prints X (red), O (green), or a number (white).

checkWin() → Returns 1 if a player wins.

checkDraw() → Returns 1 if the game is a draw.

markCell(int choice, char mark) → Updates the board with the player's mark.

isValid(int choice) → Checks if the chosen cell is free.

Example Output
      TIC TAC TOE
  Player 1 (X - Red)
  Player 2 (O - Green)

     |     |     
  1  |  2  |  3  
_____|_____|_____
     |     |     
  4  |  5  |  6  
_____|_____|_____
     |     |     
  7  |  8  |  9  
     |     |     

Player 1 enter a number (1-9): 5

Requirements

Windows OS (Uses windows.h for console color).

Dev-C++ or any Windows-based C compiler.

Customization Ideas

Add AI opponent for single-player mode.

Add score tracking across multiple rounds.

Implement keyboard shortcuts for faster input.

Add sound effects using Beep() for moves or wins.

Author

ISHANT PATHAK
A simple console game to learn loops, conditionals, arrays, and Windows console manipulation in C.
