// RTPG_4496: vars=3 stmts=3
int xn[32];
int yo[32];
int idx_arr[32];
void test_func(void) {
    int b14 = 11;
    int a46 = -4;
    int out18 = 24;
    int i;
    for (i = 0; i < 32; i++) {
        b14 = xn[i];
        out18 = xn[idx_arr[i]];
        a46 = out18 + 2;
        a46 = a46 + out18;
        b14 = b14 - 87;
        yo[i] = out18;
    }
}
int main() { test_func(); return 0; }

