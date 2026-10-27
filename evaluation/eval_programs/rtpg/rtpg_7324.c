// RTPG_7324: vars=7 stmts=2
int idx_arr[32];
void test_func(void) {
    int v94 = 39239;
    int cur90 = 14;
    int res59 = 18;
    int tmp91 = 95;
    int b97 = 46378;
    int x92 = 8;
    int x97 = 7;
    int i;
    for (i = 0; i < 42; i++) {
        cur90 = xn[idx_arr[i]];
        v94 = b97 ^ tmp91;
        x92 = x92 + 5;
    }
}
int main() { test_func(); return 0; }

