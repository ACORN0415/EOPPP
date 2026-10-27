// RTPG_2335: vars=5 stmts=3
int idx_arr[64];
void test_func(void) {
    int acc15 = 1;
    int cur7 = 46;
    float sum42 = 13.66;
    int val11 = 57617;
    int dat44 = 64769;
    int i;
    for (i = 0; i < 40; i++) {
        val11 = xn[idx_arr[i]];
        val11 = cur7;
        cur7 = dat44 | val11;
        cur7 = cur7 | acc15;
    }
}
int main() { test_func(); return 0; }

