// RTPG_8308: vars=8 stmts=9
int idx_arr[16];
void test_func(void) {
    int c57 = 52095;
    int sum89 = -3;
    double acc54 = 85.84;
    float x0 = 96.89;
    int tmp16 = 34563;
    double out38 = 46.99;
    int x32 = 43;
    int y38 = 24165;
    int i;
    for (i = 0; i < 31; i++) {
        sum89 = xn[idx_arr[i]];
        acc54 = y38 & acc54;
        c57 = x32 & x0;
        x0 = sum89 | sum89;
        tmp16 = y38 - y38;
        sum89 = out38 - c57;
        c57 = out38 / y38;
        acc54 = sum89 | out38;
        acc54 = x32 + acc54;
        tmp16 = tmp16 - 1;
    }
}
int main() { test_func(); return 0; }

