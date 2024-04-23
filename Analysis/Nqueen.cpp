#include <iostream>
#include <vector>

using namespace std;

bool valid(vector<vector<int>>& mat, int i, int j) {
    int r, c, N;
    N = mat.size();
    r = i;
    c = j;
    // validate column
    while (r >= 0) {
        if (mat[r][c] == 1) {
            return false;
        }
        r--;
    }
    r = i;
    c = j;
    // validate left diagonal
    while ((r >= 0) && (c >= 0)) {
        if (mat[r][c] == 1) {
            return false;
        }
        r--;
        c--;
    }
    r = i;
    c = j;
    // validate right diagonal
    while ((r >= 0) && (c < N)) {
        if (mat[r][c] == 1) {
            return false;
        }
        r--;
        c++;
    }
    return true;
}

void Nqueen(vector<vector<int>>& mat, int i, int N) {
    if (i == N) { // Blocked State
        for (int r = 0; r < N; r++) {
            for (int c = 0; c < N; c++) {
                if (mat[r][c] == 1) {
                    cout << "Q ";
                } else {
                    cout << "_ ";
                }
            }
            cout << endl;
        }
        cout << endl;
        return; // BackTrack
    }
    // Make choices at ith row
    for (int j = 0; j < N; j++) {
        // Place cell at [i,j] --> Valid and check
        if (valid(mat, i, j)) {
            mat[i][j] = 1; // Place queen
            Nqueen(mat, i + 1, N);
            mat[i][j] = 0; // delete queen
        }
    }
    return;
}

int main() {
    int N = 7;
    vector<vector<int>> mat(N, vector<int>(N, 0));
    Nqueen(mat, 0, N);
    return 0;
}
