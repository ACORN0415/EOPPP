// RTPG_1544: vars=8 stmts=4
int idx_arr[64];
void test_func(void) {
    int a20 = 33;
    int hi12 = -11;
    int prev44 = -30;
    int x67 = 18;
    int res10 = 49;
    int sum42 = 27;
    int v40 = -20;
    int x58 = -50;
    int i;
    for (i = 0; i < 63; i++) {
        a20 = xn[idx_arr[i]];
        hi12 = sum42 - res10;
        hi12 = prev44 + res10;
        hi12 = hi12 + sum42;
        x67 = x67 + 1;
    }
}
int main() { test_func(); return 0; }

