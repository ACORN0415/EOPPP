// RTPG_5934: vars=4 stmts=9
int xn[64];
int yo[64];
int idx_arr[64];
void test_func(void) {
    int cnt93 = -26;
    int prev1 = 47340;
    int cnt86 = 29;
    int a43 = 37717;
    int i;
    for (i = 0; i < 64; i++) {
        cnt93 = xn[i];
        cnt86 = xn[idx_arr[i]];
        cnt93 = prev1;
        prev1 = prev1 + 3;
        prev1 = prev1 + a43;
        prev1 = cnt86;
        a43 = a43 - 2;
        prev1 = cnt86 + 22474;
        prev1 = a43 + prev1;
        cnt86 = cnt86 + 3;
        cnt86 = cnt93;
        yo[i] = a43;
    }
}
int main() { test_func(); return 0; }

