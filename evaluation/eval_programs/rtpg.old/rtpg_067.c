// RTPG_67: vars=6 stmts=7
int xn[32];
int yo[32];
int idx_arr[32];
void test_func(void) {
    int out26 = -16;
    int dat13 = 94;
    int prev83 = 11;
    int lo28 = 24755;
    int x68 = 37;
    int val80 = 2;
    int i;
    for (i = 0; i < 32; i++) {
        dat13 = xn[i];
        out26 = xn[idx_arr[i]];
        lo28 = lo28 - 1;
        x68 = lo28 - out26;
        out26 = val80 + dat13;
        dat13 = prev83 + val80;
        x68 = out26 + x68;
        val80 = val80;
        out26 = dat13 - 21;
        yo[i] = lo28;
    }
}
int main() { test_func(); return 0; }

