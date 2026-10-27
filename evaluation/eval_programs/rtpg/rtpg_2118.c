// RTPG_2118: vars=3 stmts=2
void test_func(void) {
    int b60 = 36;
    int c61 = 8;
    int cnt22 = 42;
    int i;
    for (i = 0; i < 12; i++) {
        c61 = c61 - b60;
        cnt22 = cnt22 - b60;
        if (cnt22 != 75) {
        c61 = c61 - 1;
        }
    }
}
int main() { test_func(); return 0; }

