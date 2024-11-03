﻿#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// Global consts
const char X = 'X';
const char O = 'O';
const char EMPTY = ' ';
const char TIE = 'T';
const char NO_ONE = 'N';

// functions prototypes
void instruction()
{
    cout << "TIC TAC TOE GAME\n";
}

char askYesNo(string question) 
{
    char response;
    do 
    {
        cout << question << " (y/n): ";
        cin >> response;
    } while (response != 'y' && response != 'n');
    return response;
}

int askNumber(string question, int high, int low = 0) 
{
    int number;
    do 
    {
        cout << question << " (" << low << " - " << high << "): ";
        cin >> number;
    } while (number > high || number < low);
    return number;
}

char humanPiece() 
{
    char go_first = askYesNo("Do you require the first move?");
    if (go_first == 'y')
    {
        return X;
    }
    else
    {
        return O;
    }
}

char opponent(char piece)
{
    if (piece == X)
    {
        return O;
    }
    else return X;
}

void displayBoard(const vector<char>& board) 
{
    cout << "\n\t" << board[0] << " | " << board[1] << " | " << board[2];
    cout << "\n\t" << "---------";
    cout << "\n\t" << board[3] << " | " << board[4] << " | " << board[5];
    cout << "\n\t" << "---------";
    cout << "\n\t" << board[6] << " | " << board[7] << " | " << board[8];
    cout << "\n\n";
}

char winner(const vector<char>& board)
{
    const int WINNING_ROWS[8][3] =
    {
        {0,1,2},
        {3,4,5},
        {6,7,8},
        {0,3,6},
        {1,4,7},
        {2,5,8},
        {0,4,8},
        {2,4,6},
    };
    const int TOTAL_ROWS = 8;
    for (int row = 0; row < TOTAL_ROWS; row++)
    {
        if ((board[WINNING_ROWS[row][0]] != EMPTY) && (board[WINNING_ROWS[row][0]] == board[WINNING_ROWS[row][1]]) && (board[WINNING_ROWS[row][1]] == board[WINNING_ROWS[row][2]]))
            return board[WINNING_ROWS[row][0]];
        
    }
    if (count(board.begin(), board.end(), EMPTY) == 0)
        return TIE;
    return NO_ONE;
}

inline bool isLegal(const vector<char>& board, int move)
{
    return board[move] == EMPTY;
}

int humanMove(const vector<char>& board, char human)
{
    int move = askNumber("Where will you move", (board.size() - 1));
    while (!isLegal(board, move))
    {
        cout << "\nThet square is alredy occupied. foolish humna.\n";
        move = askNumber("Where will you move", (board.size() - 1));
    }
    cout << "Fine...\n";
    return move;
}
int computerMove(vector<char> board, char computer)
{
    unsigned int move = 0;
    bool found = false;
    while (!found && move < board.size()) 
    {
        if (isLegal(board, move))
        {
            board[move] = computer;
            found = winner(board) == computer;
            board[move] = EMPTY;
        }
        if (!found) {
            ++move;
        }
    }
    if (!found)
    {
        move = 0;
        char human = opponent(computer);
        while (!found && move < board.size())
        {
            if (isLegal(board, move))
            {
                board[move] = human;
                found = winner(board) == human;
                board[move] = EMPTY;
            }
            if (!found) {
                ++move;
            }
        }
    }
    if (!found) 
    {
        move = 0;
        unsigned int i = 0;
        const int BEST_MOVES[] = { 4,0,2,6,8,1,3,5,7 };
        while (!found && i < board.size())
        {
            move = BEST_MOVES[i];
            if (isLegal(board, move))
            {
                found = true;
            }
            ++i;
        }
    }
    cout << "I go to " << move << endl;
    return move;
}

void announceWinner(char winner, char computer, char human)
{
    if (winner == computer) cout << "Computer win!";
    else if (winner == human) cout << "Human win!";
    else cout << "Tie!";
}

int main()
{
    int move;
    const int NUM_SQUARES = 9;
    vector<char> board(NUM_SQUARES, EMPTY);
    instruction();
    char human = humanPiece();
    char computer = opponent(human);
    char turn = X;
    displayBoard(board);
    while (winner(board) == NO_ONE) 
    {
        if (turn == human)
        {
            move = humanMove(board, human);
            board[move] = human;
        }
        else
        {
            move = computerMove(board, computer);
            board[move] = computer;
        }
        displayBoard(board);
        turn = opponent(turn);
    }
    announceWinner(winner(board), computer, human);
}
