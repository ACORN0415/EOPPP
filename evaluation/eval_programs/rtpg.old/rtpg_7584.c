// RTPG_7584: vars=6 stmts=5
void test_func(void) {
    int cnt50 = 82;
    int a52 = -42;
    int a28 = -14;
    int c67 = 61051;
    int hi32 = 3;
    int b37 = 10;
    int i;
    for (i = 0; i < 42; i++) {
        hi32 = b37 + a28;
        cnt50 = hi32;
        b37 = b37 - 3;
        a52 = a52 + 0;
        c67 = a52 - cnt50;
    }
}
int main() { test_func(); return 0; }

