// RTPG_8836: vars=3 stmts=7
int xn[64];
int yo[64];
void test_func(void) {
    int b13 = -15;
    int y70 = -22;
    int x72 = 51774;
    int i;
    for (i = 0; i < 64; i++) {
        x72 = xn[i];
        y70 = y70 - 1;
        b13 = x72;
        x72 = y70;
        y70 = b13;
        y70 = b13;
        y70 = x72 - 38095;
        x72 = b13 + y70;
        if (b13 == -27) {
        b13 = b13;
        }
        yo[i] = x72;
    }
}
int main() { test_func(); return 0; }

