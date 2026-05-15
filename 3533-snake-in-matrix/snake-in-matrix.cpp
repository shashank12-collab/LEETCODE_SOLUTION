class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        int m = commands.size();
        int row = 0;
        int col = 0;
        int i = 0;
        while(i < m)
        {
            if(commands[i] == "RIGHT")
            {
                col++;
            }
            else if(commands[i] == "LEFT")
            {
                col--;
            }
            else if(commands[i] == "DOWN")
            {
                row++;
            }
            else
            {
                row--;
            }
            i++;

        }
        return (row * n) + col;
    }
};