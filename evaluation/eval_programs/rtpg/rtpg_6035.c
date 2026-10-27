// RTPG_6035: vars=4 stmts=9
int xn[64];
int yo[64];
int idx_arr[64];
void test_func(void) {
    int cnt93 = -26;
    int a43 = 47340;
    int prev1 = 29;
    int cnt86 = 37717;
    int i;
    for (i = 0; i < 64; i++) {
        cnt93 = xn[i];
        prev1 = xn[idx_arr[i]];
        cnt93 = a43;
        a43 = a43 + 3;
        a43 = a43 + cnt86;
        a43 = prev1;
        cnt86 = cnt86 - 2;
        a43 = prev1 + 22474;
        a43 = cnt86 + a43;
        prev1 = prev1 + 3;
        prev1 = cnt93;
        yo[i] = cnt86;
    }
}
int main() { test_func(); return 0; }

