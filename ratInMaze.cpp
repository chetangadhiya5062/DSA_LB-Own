#include <iostream>
#include <vector>
using namespace std;

bool isSafe(int maze[][4], int row, int col, int srcX, int srcY, int newX, int newY, vector <vector <bool> > &visited){
    //check for path closed or not?
    //remove infinite loop means not visit again if already visited.
    //check bounds.

    if(
        (newX >= 0 && newX < row) &&
        (newY >= 0 && newY < col) &&
        maze[newX][newY] == 1 &&
        visited[newX][newY] == false){
            // if these all conditions matches then it is safe to go at that newX, newY
        return true;
    }
    else{
        return false;
    }

}
void findALLPath(int maze[][4], int row, int col, int srcX, int srcY, string &output, vector<vector<bool> > &visited){
    // base case
    // stop when destination comes.
    //destination indexes = for X = [row-1], for Y = [col-1].
    if(srcX == col-1 && srcY == row-1){
        cout << output << endl;
        return;
    }

    //solve 1 case, rest will be handled by recursion.

//North = UP
    int newX = srcX-1;
    int newY = srcY;
    if(isSafe(maze, row, col, srcX, srcY, newX, newY, visited)){
        // mark visited
        visited[newX][newY] = true;
        output.push_back('U');
        //call recursion
        findALLPath(maze, row, col, newX, newY, output, visited);
        //backtracking because of call by reference
        output.pop_back();
        visited[newX][newY] = false;
    }
    
    //South = Down
    newX = srcX+1;
    newY = srcY;
    if(isSafe(maze, row, col, srcX, srcY, newX, newY, visited)){
        // mark visited
        visited[newX][newY] = true;
        output.push_back('D');
        //call recursion
        findALLPath(maze, row, col, newX, newY, output, visited);
        //backtracking because of call by reference
        output.pop_back();
        visited[newX][newY] = false;
    }
    
    // West = Left
    newX = srcX;
    newY = srcY-1;
    if(isSafe(maze, row, col, srcX, srcY, newX, newY, visited)){
        // mark visited
        visited[newX][newY] = true;
        output.push_back('L');
        //call recursion
        findALLPath(maze, row, col, newX, newY, output, visited);
        //backtracking because of call by reference
        output.pop_back();
        visited[newX][newY] = false;
    }
    
    // East = Right
    newX = srcX;
    newY = srcY+1;
    if(isSafe(maze, row, col, srcX, srcY, newX, newY, visited)){
        // mark visited
        visited[newX][newY] = true;
        output.push_back('R');
        //call recursion
        findALLPath(maze, row, col, newX, newY, output, visited);
        //backtracking because of call by reference
        output.pop_back();
        visited[newX][newY] = false;
    }
}
int main(){
    int maze[4][4] = {
        {1,0,0,0},
        {1,1,0,0},
        {1,1,1,0},
        {1,1,1,1}
    };

    int row = 4;
    int col = 4;
    int srcX = 0;//X coordinate at each stage
    int srcY = 0;//Y coordinate

    string output = " ";

    // bool 2D array for visited tracking handling.
    vector< vector <bool> > visited (row, vector <bool> (col, false)); 

    if (maze[0][0] == 0){
        //start index is closed so RAT can not move.
        cout << "No Path Exist." << endl;
    }
    else{
        visited[srcX][srcY] = true;
        findALLPath(maze, row, col, srcX, srcY, output, visited);
    }
    return 0;
}