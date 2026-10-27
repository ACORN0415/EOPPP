// RTPG_3199: vars=3 stmts=7
void test_func(void) {
    int hi10 = 45410;
    int cur56 = 55;
    int out0 = 41;
    int i;
    for (i = 0; i < 5; i++) {
        cur56 = hi10 + cur56;
        hi10 = out0 + cur56;
        out0 = out0 - 5;
        hi10 = hi10;
        cur56 = out0;
        hi10 = out0 + -34;
        cur56 = cur56;
        if (cur56 == 35) {
        hi10 = hi10 + cur56;
        }
    }
}
int main() { test_func(); return 0; }

