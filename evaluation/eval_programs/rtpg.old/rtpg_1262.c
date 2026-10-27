// RTPG_1262: vars=6 stmts=6
int xn[64];
int yo[64];
int idx_arr[64];
void test_func(void) {
    int lo64 = 49818;
    int prev27 = 4;
    double acc8 = 79.94;
    int hi71 = 1;
    int b87 = 59;
    double a14 = 63.33;
    int i;
    for (i = 0; i < 64; i++) {
        prev27 = xn[i];
        hi71 = xn[idx_arr[i]];
        b87 = b87 + 4;
        hi71 = b87 - a14;
        a14 = a14 + 4;
        a14 = hi71 + 10;
        a14 = lo64;
        prev27 = hi71;
        yo[i] = b87;
    }
}
int main() { test_func(); return 0; }

