// RTPG_9021: vars=3 stmts=11
void test_func(void) {
    int v5 = 65251;
    int hi28 = 8;
    int out6 = 8;
    int i;
    for (i = 0; i < 46; i++) {
        hi28 = hi28 + 13;
        hi28 = hi28 + v5;
        v5 = out6;
        out6 = v5;
        hi28 = out6 + v5;
        v5 = v5 + out6;
        v5 = v5 + 5;
        hi28 = v5;
        v5 = hi28 - v5;
        v5 = out6;
        out6 = out6 - 1;
    }
}
int main() { test_func(); return 0; }

