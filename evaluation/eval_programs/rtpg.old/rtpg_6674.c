// RTPG_6674: vars=7 stmts=4
int xn[16];
int yo[16];
void test_func(void) {
    int acc99 = -5;
    int x47 = 16754;
    int dat52 = 28;
    int c13 = -19;
    int prev71 = 63;
    int cur67 = 10;
    int dat30 = 3077;
    int i;
    for (i = 0; i < 16; i++) {
        cur67 = xn[i];
        dat30 = acc99 - dat30;
        acc99 = prev71 + 34;
        prev71 = prev71 + 3;
        x47 = x47 + 1;
        yo[i] = x47;
    }
}
int main() { test_func(); return 0; }

