// RTPG_2164: vars=4 stmts=4
int xn[16];
int yo[16];
void test_func(void) {
    int x41 = 3;
    int out74 = 25848;
    int y19 = 88;
    int sum73 = 16147;
    int i;
    for (i = 0; i < 16; i++) {
        x41 = xn[i];
        sum73 = x41 + x41;
        y19 = x41 + sum73;
        out74 = out74 + -31;
        x41 = x41;
        if (x41 < 88) {
        x41 = out74 + 21;
        }
        yo[i] = y19;
    }
}
int main() { test_func(); return 0; }

