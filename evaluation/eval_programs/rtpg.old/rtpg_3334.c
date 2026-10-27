// RTPG_3334: vars=3 stmts=8
int xn[32];
int yo[32];
void test_func(void) {
    int lo72 = 43;
    int dat57 = 11;
    int c71 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        lo72 = xn[i];
        c71 = dat57 - c71;
        lo72 = lo72 + 1;
        dat57 = lo72;
        lo72 = dat57 - lo72;
        c71 = c71 - 66;
        lo72 = c71;
        lo72 = lo72;
        lo72 = c71 + dat57;
        yo[i] = lo72;
    }
}
int main() { test_func(); return 0; }

