// RTPG_5173: vars=10 stmts=6
void test_func(void) {
    int b57 = 54;
    int dat3 = 11908;
    int sum17 = 9;
    int hi33 = 2;
    int hi17 = 29;
    int tmp58 = 86;
    int a59 = -47;
    int b3 = 3;
    int tmp96 = 1;
    int c80 = 21;
    int *ptr = &tmp58;
    int i;
    for (i = 0; i < 100; i++) {
        hi33 = b57 + b57;
        c80 = b3;
        dat3 = dat3 - 2;
        dat3 = dat3 - 1;
        c80 = hi33;
        hi33 = b3;
        *ptr = *ptr + 2;
    }
}
int main() { test_func(); return 0; }

