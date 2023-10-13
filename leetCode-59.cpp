class Solution
{
public:
    vector<vector<int>> generateMatrix(int n)
    {
        vector<vector<int>> mat(n, vector<int>(n, 0));
        int left = 0;
        int right = n - 1;
        int top = 0;
        int bottom = n - 1;
        int value = 1;
        while (left <= right && top <= bottom)
        {
            …
        }
        // right move to towards center
        right--; // bottom row iterate
        for (int i = right; i >= left; i--)
        {
            mat[bottom][i] = value++;
        }
        // bottom moves close to center
        bottom--;
        // left column iterate
        for (int i = bottom; i >= top; i--)
        {
            mat[i][left] = value++;
        }
        // left moves to close to center
        left++;
    }
    // resultaint matrix
    return mat;
}
}
;