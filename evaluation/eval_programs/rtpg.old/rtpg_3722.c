// RTPG_3722: vars=10 stmts=4
int xn[16];
int yo[16];
int idx_arr[16];
void test_func(void) {
    int c14 = 34002;
    int res71 = 1;
    int hi2 = 68;
    int y72 = 5;
    int res19 = -22;
    int b77 = 1;
    int lo97 = 26;
    int lo60 = 47777;
    int acc7 = 1;
    int v59 = 88;
    int i;
    for (i = 0; i < 16; i++) {
        b77 = xn[i];
        lo60 = xn[idx_arr[i]];
        b77 = lo60 + res19;
        lo97 = lo97 - 4;
        acc7 = acc7 + res71;
        lo60 = res71 + 17;
        yo[i] = y72;
    }
}
int main() { test_func(); return 0; }

