// RTPG_4967: vars=4 stmts=4
void test_func(void) {
    int c30 = 2;
    int res33 = 48282;
    int x27 = 63411;
    int dat64 = 16;
    int i;
    for (i = 0; i < 88; i++) {
        c30 = res33 - c30;
        x27 = res33 + c30;
        res33 = res33 - 4;
        x27 = x27;
    }
}
int main() { test_func(); return 0; }

