typedef struct  s_point
{
    int           x;
    int           y;
}               t_point;


void recur(char **tab, int r, int c, int R, int C, char tg)
{
    //this means we have stepped outside the bounds of our grid
    if (r < 0 || c < 0 || r >= R || c >= C)
        return;
    
    //if the cell is not what we are targeting with tg skip it
    if (tab[r][c] != tg)
        return;

    // it is what we are targetting then we change it to F
    tab[r][c] = 'F';

    //recursive target the neigbors
    int dr[4] = {0, 0, 1, -1};
    int dc[4] = {1, -1, 0, 0};

    for (int i = 0; i < 4; i++)
        recur(tab, r+dr[i], c+dc[i], R, C, tg);
}

void  flood_fill(char **tab, t_point size, t_point begin)
{
    int R = size.y, C = size.x;
    int sr = begin.y, sc = begin.x;

    recur(tab, sr, sc, R, C, tab[sr][sc]);
}