// RTPG_7395: vars=7 stmts=4
int idx_arr[32];
void test_func(void) {
    int acc17 = 5;
    int val60 = 8;
    int out80 = 82;
    int hi97 = 2861;
    int v5 = 0;
    int cnt40 = 1;
    int sum88 = 35;
    int i;
    for (i = 0; i < 75; i++) {
        v5 = xn[idx_arr[i]];
        out80 = out80 + hi97;
        acc17 = sum88 + v5;
        cnt40 = out80 + v5;
        hi97 = hi97 - acc17;
    }
}
int main() { test_func(); return 0; }

