// RTPG_4566: vars=3 stmts=3
void test_func(void) {
    int res16 = 33;
    int cur26 = 53717;
    int cnt18 = -10;
    int i;
    for (i = 0; i < 40; i++) {
        cur26 = res16 + 93;
        cur26 = cnt18 + 72;
        cur26 = cur26 + res16;
    }
}
int main() { test_func(); return 0; }

