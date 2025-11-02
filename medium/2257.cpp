class Solution {
public:
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        vector<vector<int>> v(m, vector<int>(n, 0));

        // 9 = wall, 2 = guard, 1 = watched
        for (auto &w : walls) v[w[0]][w[1]] = 9;
        for (auto &g : guards) v[g[0]][g[1]] = 2;

        // 4 directions: up, down, left, right
        int dirs[4][2] = {{-1,0}, {1,0}, {0,-1}, {0,1}};

        for (auto &g : guards) {
            for (auto &d : dirs) {
                int x = g[0] + d[0];
                int y = g[1] + d[1];
                while (x >= 0 && x < m && y >= 0 && y < n) {
                    if (v[x][y] == 9 || v[x][y] == 2) break;
                    v[x][y] = 1;
                    x += d[0];
                    y += d[1];
                }
            }
        }
        int cnt = 0;
        for (int i = 0; i < m; ++i)
            for (int j = 0; j < n; ++j)
                if (v[i][j] == 0)cnt++;
        return cnt;
    }
};
