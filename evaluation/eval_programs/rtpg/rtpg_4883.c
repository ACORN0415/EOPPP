// RTPG_4883: vars=9 stmts=5
int xn[16];
int yo[16];
void test_func(void) {
    int v39 = -26;
    int acc55 = 0;
    int b33 = 5;
    int x67 = -5;
    int cur93 = 96;
    int c51 = 59687;
    int prev37 = -42;
    int cnt65 = 42;
    int c33 = 7;
    int *ptr = &c33;
    int i;
    for (i = 0; i < 16; i++) {
        cur93 = xn[i];
        acc55 = acc55 + 1;
        b33 = b33 - cnt65;
        cnt65 = cur93 + 97;
        v39 = v39 - 1;
        v39 = cnt65 - acc55;
        *ptr = *ptr + 2;
        yo[i] = cnt65;
    }
}
int main() { test_func(); return 0; }

