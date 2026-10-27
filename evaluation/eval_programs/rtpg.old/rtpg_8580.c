// RTPG_8580: vars=6 stmts=7
int xn[16];
int yo[16];
int idx_arr[16];
void test_func(void) {
    int x79 = -34;
    int v37 = 22;
    double val0 = 4.69;
    int cur66 = 63313;
    double c0 = 84.92;
    double hi99 = 63.07;
    int i;
    for (i = 0; i < 16; i++) {
        val0 = xn[i];
        c0 = xn[idx_arr[i]];
        v37 = val0 - 3;
        hi99 = val0;
        x79 = c0;
        x79 = c0 + 11561;
        v37 = v37 - 14;
        cur66 = cur66 - 1;
        x79 = c0 + hi99;
        yo[i] = x79;
    }
}
int main() { test_func(); return 0; }

