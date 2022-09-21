#include <bits/stdc++.h>
using namespace std;
bool isValidSudoku(vector<vector<char>> &board)
{
    const int cnt = 9; // ye object use krre hai niche isiliye
    bool row[cnt][cnt] = {false};
    bool col[cnt][cnt] = {false};
    bool sub[cnt][cnt] = {false};

    for (int r = 0; r < cnt; r++)
    {
        for (int c = 0; c < cnt; c++)
        {
            if (board[r][c] == '.') // if no element
                continue;
            int idx = board[r][c] - '0' - 1;  // char to num index
            int area = (r / 3) * 3 + (c / 3); // area for sub array portion like it will give like 0,1,2,3,4....8 areas

            if (row[r][idx] or col[r][idx] or sub[area][idx]) // means repeating
                return false;
            row[r][idx] = true;
            col[r][idx] = true;
            sub[area][idx] = true;
        }
    }
    return true;
}

int main()
{
    vector<vector<char>> board = {{'5', '3', '.', '.', '7', '.', '.', '.', '.'},
                                  {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
                                  {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
                                  {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
                                  {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
                                  {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
                                  {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
                                  {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
                                  {'.', '.', '.', '.', '8', '.', '.', '7', '9'}};

    bool res = isValidSudoku(board);
}
