// RTPG_8458: vars=7 stmts=4
int xn[16];
int yo[16];
int idx_arr[16];
void test_func(void) {
    int cnt61 = 11770;
    int prev71 = 45270;
    int c37 = -49;
    int y93 = 3;
    int acc42 = 36506;
    int prev90 = 41123;
    int sum17 = -25;
    int i;
    for (i = 0; i < 16; i++) {
        acc42 = xn[i];
        prev71 = xn[idx_arr[i]];
        acc42 = acc42 - prev71;
        y93 = sum17 + 1;
        cnt61 = c37;
        prev90 = c37 + 9;
        if (acc42 != 53) {
        y93 = cnt61;
        }
        yo[i] = prev90;
    }
}
int main() { test_func(); return 0; }

