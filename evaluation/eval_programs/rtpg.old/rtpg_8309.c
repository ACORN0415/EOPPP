// RTPG_8309: vars=5 stmts=4
int xn[64];
int yo[64];
int idx_arr[64];
void test_func(void) {
    int cur82 = 1;
    int c40 = 12;
    int hi9 = -50;
    int cnt23 = 33135;
    int hi47 = 43;
    int i;
    for (i = 0; i < 64; i++) {
        hi9 = xn[i];
        hi47 = xn[idx_arr[i]];
        cur82 = cur82 + 3;
        cnt23 = cur82 - c40;
        cur82 = hi47 - 48;
        hi47 = c40 - cur82;
        yo[i] = hi9;
    }
}
int main() { test_func(); return 0; }

