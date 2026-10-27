// RTPG_3402: vars=3 stmts=5
int xn[16];
int yo[16];
void test_func(void) {
    int y7 = 0;
    int c8 = 45;
    int b42 = 38;
    int i;
    for (i = 0; i < 16; i++) {
        c8 = xn[i];
        c8 = c8 - 2;
        c8 = y7 - c8;
        c8 = c8;
        y7 = b42 + c8;
        c8 = y7 + 2;
        if (b42 <= 47) {
        c8 = c8;
        }
        yo[i] = c8;
    }
}
int main() { test_func(); return 0; }

