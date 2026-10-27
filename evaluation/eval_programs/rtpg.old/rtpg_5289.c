// RTPG_5289: vars=8 stmts=4
int idx_arr[32];
void test_func(void) {
    int cur37 = 28720;
    int lo78 = 1;
    int cnt63 = 23922;
    int v73 = 54603;
    int out50 = 45;
    int prev26 = 44;
    int a53 = 92;
    int dat94 = 65206;
    int *ptr = &dat94;
    int i;
    for (i = 0; i < 49; i++) {
        cur37 = xn[idx_arr[i]];
        v73 = dat94 - 23953;
        out50 = out50 - 4;
        lo78 = out50;
        prev26 = dat94 + cnt63;
        *ptr = *ptr + 1;
    }
}
int main() { test_func(); return 0; }

