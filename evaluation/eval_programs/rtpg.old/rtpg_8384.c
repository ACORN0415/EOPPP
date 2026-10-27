// RTPG_8384: vars=8 stmts=4
int xn[32];
int yo[32];
int idx_arr[32];
void test_func(void) {
    int prev16 = 46;
    int res71 = 29505;
    int a78 = -36;
    int out25 = 48;
    int cur84 = 56339;
    int lo93 = 19;
    int prev15 = 49804;
    int c39 = -19;
    int i;
    for (i = 0; i < 32; i++) {
        prev16 = xn[i];
        cur84 = xn[idx_arr[i]];
        a78 = out25 + prev15;
        cur84 = cur84 - 2;
        a78 = c39 + lo93;
        a78 = lo93 + prev15;
        if (c39 > 26) {
        a78 = prev15 - cur84;
        }
        yo[i] = prev16;
    }
}
int main() { test_func(); return 0; }

