// RTPG_4394: vars=4 stmts=3
int idx_arr[32];
void test_func(void) {
    int sum2 = 2;
    float x86 = 42.23;
    int val83 = 8;
    double sum61 = 15.95;
    int h0 = 1655;
    int sv0 = 0;
    int h1 = -18;
    int sv1 = 0;
    int i;
    for (i = 0; i < 95; i++) {
        x86 = xn[idx_arr[i]];
        sum2 = x86 * 47;
        sum2 = sum2 - 2;
        sum2 = x86 + 9;
    }
}
int main() { test_func(); return 0; }

