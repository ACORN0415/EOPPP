// RTPG_8709: vars=3 stmts=5
int xn[64];
int yo[64];
int idx_arr[64];
void test_func(void) {
    int res24 = 4;
    int v41 = 51120;
    int cnt99 = -23;
    int h0 = -19;
    int sv0 = 0;
    int h1 = -34;
    int sv1 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        res24 = xn[i];
        v41 = xn[idx_arr[i]];
        cnt99 = v41 - res24;
        v41 = res24 * 4;
        v41 = v41 + 1;
        cnt99 = res24 * 47329;
        res24 = cnt99 * -2;
        yo[i] = res24;
    }
}
int main() { test_func(); return 0; }

