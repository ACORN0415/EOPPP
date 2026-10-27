// RTPG_4815: vars=9 stmts=5
int xn[16];
int yo[16];
void test_func(void) {
    int prev37 = -26;
    int acc55 = 0;
    int v39 = 5;
    int cnt65 = -5;
    int x67 = 96;
    int c33 = 59687;
    int c51 = -42;
    int cur93 = 42;
    int b33 = 7;
    int *ptr = &b33;
    int i;
    for (i = 0; i < 16; i++) {
        x67 = xn[i];
        acc55 = acc55 + 1;
        v39 = v39 - cur93;
        cur93 = x67 + 97;
        prev37 = prev37 - 1;
        prev37 = cur93 - acc55;
        *ptr = *ptr + 2;
        yo[i] = cur93;
    }
}
int main() { test_func(); return 0; }

