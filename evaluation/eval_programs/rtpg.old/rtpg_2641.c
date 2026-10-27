// RTPG_2641: vars=5 stmts=11
int xn[32];
int yo[32];
int idx_arr[32];
void test_func(void) {
    int prev30 = 40;
    int val10 = 7;
    int hi51 = -3;
    int y55 = 4;
    int cur15 = 55;
    int i;
    for (i = 0; i < 32; i++) {
        val10 = xn[i];
        val10 = xn[idx_arr[i]];
        val10 = cur15 - 0;
        prev30 = val10;
        y55 = y55 + val10;
        y55 = hi51 + cur15;
        cur15 = hi51 - val10;
        val10 = y55;
        cur15 = y55 - val10;
        val10 = hi51 - 50097;
        cur15 = cur15 - 57608;
        val10 = cur15 + 15895;
        hi51 = hi51 - 3;
        yo[i] = hi51;
    }
}
int main() { test_func(); return 0; }

