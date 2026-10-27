// RTPG_1248: vars=6 stmts=6
int xn[64];
int yo[64];
int idx_arr[64];
void test_func(void) {
    int a14 = 49818;
    int hi71 = 4;
    double prev27 = 79.94;
    int acc8 = 1;
    int b87 = 59;
    double lo64 = 63.33;
    int i;
    for (i = 0; i < 64; i++) {
        hi71 = xn[i];
        acc8 = xn[idx_arr[i]];
        b87 = b87 + 4;
        acc8 = b87 - lo64;
        lo64 = lo64 + 4;
        lo64 = acc8 + 10;
        lo64 = a14;
        hi71 = acc8;
        yo[i] = b87;
    }
}
int main() { test_func(); return 0; }

