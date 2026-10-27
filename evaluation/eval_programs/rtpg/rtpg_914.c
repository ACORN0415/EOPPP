// RTPG_914: vars=9 stmts=3
int xn[16];
int yo[16];
void test_func(void) {
    int out18 = 4;
    int out4 = 30;
    int b0 = 88;
    int acc87 = 65;
    int cnt85 = 82;
    int res20 = 73;
    int b14 = 6;
    int cur33 = -42;
    int cnt19 = -36;
    int *ptr = &cnt85;
    int i;
    for (i = 0; i < 16; i++) {
        cnt85 = xn[i];
        res20 = cnt85 % cnt19;
        b0 = cnt19 + cur33;
        cnt85 = cnt19 / cnt85;
        *ptr = *ptr + 5;
        if (b0 < 13) {
        out18 = acc87;
        }
        yo[i] = res20;
    }
}
int main() { test_func(); return 0; }

