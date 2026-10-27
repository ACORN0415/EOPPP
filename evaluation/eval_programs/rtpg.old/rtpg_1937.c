// RTPG_1937: vars=8 stmts=8
void test_func(void) {
    int tmp3 = 42;
    int v66 = 1;
    int out2 = 9;
    int res78 = -10;
    int val37 = 4;
    int out81 = -6;
    int hi81 = 7;
    int out33 = 56152;
    int i;
    for (i = 0; i < 33; i++) {
        v66 = val37 | out2;
        out2 = res78 - tmp3;
        res78 = v66 - out33;
        hi81 = out33 & res78;
        out81 = val37 - 1;
        tmp3 = val37 % v66;
        val37 = val37 & val37;
        out33 = res78 + out2;
        if (out81 >= -15) {
        out33 = tmp3;
        }
    }
}
int main() { test_func(); return 0; }

