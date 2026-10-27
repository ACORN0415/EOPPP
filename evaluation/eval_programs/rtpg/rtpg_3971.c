// RTPG_3971: vars=5 stmts=4
int xn[16];
int yo[16];
void test_func(void) {
    int a86 = 8;
    int dat62 = 95;
    int b65 = 7;
    int cur65 = 33329;
    int cur24 = 60;
    int i;
    for (i = 0; i < 16; i++) {
        cur65 = xn[i];
        a86 = dat62 - 2;
        cur24 = a86;
        b65 = b65 + -27;
        cur24 = cur65 + cur24;
        yo[i] = a86;
    }
}
int main() { test_func(); return 0; }

