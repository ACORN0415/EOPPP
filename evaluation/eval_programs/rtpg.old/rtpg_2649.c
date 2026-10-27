// RTPG_2649: vars=8 stmts=6
void test_func(void) {
    int val40 = 1;
    int hi4 = 37;
    int cur53 = 7;
    int sum72 = 43801;
    int hi17 = 3;
    int c97 = 0;
    int prev60 = -31;
    int cur12 = 8;
    int i;
    for (i = 0; i < 96; i++) {
        prev60 = val40 - c97;
        cur53 = cur53 - 1;
        val40 = cur12 - cur53;
        hi4 = hi4 - val40;
        c97 = c97 - 3;
        prev60 = cur53;
    }
}
int main() { test_func(); return 0; }

