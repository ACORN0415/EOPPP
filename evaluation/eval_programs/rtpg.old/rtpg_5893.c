// RTPG_5893: vars=7 stmts=10
int idx_arr[16];
void test_func(void) {
    int hi12 = -20;
    int out50 = 38;
    double acc74 = 86.66;
    int c22 = 31923;
    double c39 = 23.32;
    int cur50 = 52652;
    int cur4 = 74;
    int h0 = 6;
    int sv0 = 0;
    int h1 = 11;
    int sv1 = 0;
    int i;
    for (i = 0; i < 35; i++) {
        cur4 = xn[idx_arr[i]];
        hi12 = c22 - cur50;
        c22 = cur50 + c22;
        cur4 = hi12 - c22;
        cur50 = cur4;
        out50 = out50 - 5;
        out50 = cur50 + c22;
        out50 = hi12 * 4;
        cur50 = cur50 * 6;
        out50 = out50 + 48;
        c39 = acc74 + c39;
    }
}
int main() { test_func(); return 0; }

