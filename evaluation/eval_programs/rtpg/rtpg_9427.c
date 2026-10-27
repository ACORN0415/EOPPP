// RTPG_9427: vars=5 stmts=5
int xn[32];
int yo[32];
void test_func(void) {
    int b13 = 9;
    int y35 = 5;
    int c90 = 76;
    int out85 = -3;
    int res32 = 2;
    int i;
    for (i = 0; i < 32; i++) {
        b13 = xn[i];
        c90 = y35 - 5;
        c90 = c90 - b13;
        out85 = b13;
        y35 = y35 - b13;
        out85 = c90;
        yo[i] = c90;
    }
}
int main() { test_func(); return 0; }

