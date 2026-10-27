// RTPG_3894: vars=4 stmts=2
int idx_arr[32];
void test_func(void) {
    float c71 = 96.49;
    int v7 = 68;
    double v2 = 30.41;
    int cnt9 = -28;
    int i;
    for (i = 0; i < 39; i++) {
        cnt9 = xn[idx_arr[i]];
        v2 = c71 - cnt9;
        v7 = c71 + -7;
    }
}
int main() { test_func(); return 0; }

