// RTPG_3269: vars=4 stmts=7
int xn[64];
int yo[64];
int idx_arr[64];
void test_func(void) {
    int hi75 = 9;
    int v56 = 75;
    int res91 = 38471;
    int y1 = 1;
    int i;
    for (i = 0; i < 64; i++) {
        res91 = xn[i];
        v56 = xn[idx_arr[i]];
        y1 = res91 + y1;
        y1 = hi75 + res91;
        y1 = hi75 - 88;
        y1 = y1 + v56;
        res91 = v56 + res91;
        hi75 = res91;
        hi75 = hi75 + 1;
        yo[i] = res91;
    }
}
int main() { test_func(); return 0; }

