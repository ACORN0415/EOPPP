// RTPG_2132: vars=3 stmts=2
void test_func(void) {
    int c61 = 36;
    int b60 = 8;
    int cnt22 = 42;
    int i;
    for (i = 0; i < 12; i++) {
        b60 = b60 - c61;
        cnt22 = cnt22 - c61;
        if (cnt22 != 75) {
        b60 = b60 - 1;
        }
    }
}
int main() { test_func(); return 0; }

