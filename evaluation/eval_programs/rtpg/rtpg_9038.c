// RTPG_9038: vars=3 stmts=2
int xn[32];
int yo[32];
void test_func(void) {
    int c96 = 47;
    int b78 = 33;
    int a32 = -7;
    int i;
    for (i = 0; i < 32; i++) {
        c96 = xn[i];
        a32 = a32 + b78;
        c96 = c96 - 3;
        if (b78 > -21) {
        b78 = b78 + a32;
        }
        yo[i] = c96;
    }
}
int main() { test_func(); return 0; }

