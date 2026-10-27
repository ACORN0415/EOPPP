// RTPG_5112: vars=10 stmts=6
void test_func(void) {
    int b57 = 54;
    int c80 = 11908;
    int dat3 = 9;
    int tmp58 = 2;
    int b3 = 29;
    int tmp96 = 86;
    int hi33 = -47;
    int hi17 = 3;
    int a59 = 1;
    int sum17 = 21;
    int *ptr = &tmp96;
    int i;
    for (i = 0; i < 100; i++) {
        tmp58 = b57 + b57;
        sum17 = hi17;
        c80 = c80 - 2;
        c80 = c80 - 1;
        sum17 = tmp58;
        tmp58 = hi17;
        *ptr = *ptr + 2;
    }
}
int main() { test_func(); return 0; }

