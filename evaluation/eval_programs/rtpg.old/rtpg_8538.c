// RTPG_8538: vars=3 stmts=8
void test_func(void) {
    int cur2 = 50878;
    int sum96 = 8;
    int hi52 = 9;
    int i;
    for (i = 0; i < 41; i++) {
        cur2 = sum96 + sum96;
        cur2 = cur2 + 2;
        sum96 = sum96 + cur2;
        hi52 = cur2;
        cur2 = hi52 + -43;
        sum96 = cur2 + -43;
        hi52 = sum96 + hi52;
        hi52 = hi52;
    }
}
int main() { test_func(); return 0; }

