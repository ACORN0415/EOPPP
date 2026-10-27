// RTPG_9367: vars=3 stmts=3
int idx_arr[32];
void test_func(void) {
    int cur29 = 49309;
    int v0 = 3;
    int c56 = 3;
    int i;
    for (i = 0; i < 40; i++) {
        c56 = xn[idx_arr[i]];
        c56 = v0 - c56;
        c56 = c56 - 4;
        cur29 = cur29 + 1;
    }
}
int main() { test_func(); return 0; }

