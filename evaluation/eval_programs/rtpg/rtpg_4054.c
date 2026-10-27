// RTPG_4054: vars=3 stmts=2
int idx_arr[16];
void test_func(void) {
    int out61 = 40;
    int z27 = 87;
    float res65 = 60.14;
    int i;
    for (i = 0; i < 24; i++) {
        out61 = xn[idx_arr[i]];
        z27 = out61 - z27;
        out61 = out61 + res65;
    }
}
int main() { test_func(); return 0; }

