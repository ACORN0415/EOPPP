// RTPG_1825: vars=5 stmts=2
int idx_arr[16];
void test_func(void) {
    int cnt7 = 43;
    int c23 = 18;
    int y40 = 22;
    int cnt20 = -46;
    int hi3 = 13;
    int i;
    for (i = 0; i < 55; i++) {
        cnt20 = xn[idx_arr[i]];
        cnt7 = cnt7 + 4;
        c23 = cnt20 + y40;
    }
}
int main() { test_func(); return 0; }

