// RTPG_980: vars=4 stmts=6
int xn[32];
int yo[32];
void test_func(void) {
    int cur94 = -48;
    int c73 = 7;
    int res16 = 7;
    int c46 = 5;
    int i;
    for (i = 0; i < 32; i++) {
        c73 = xn[i];
        c73 = c73 - 5;
        c46 = c46;
        res16 = res16 + c73;
        c46 = c73;
        c73 = cur94 + 32166;
        c73 = c46 + c73;
        yo[i] = res16;
    }
}
int main() { test_func(); return 0; }

