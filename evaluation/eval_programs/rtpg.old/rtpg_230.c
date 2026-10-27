// RTPG_230: vars=3 stmts=4
void test_func(void) {
    int lo48 = -38;
    int y45 = 0;
    int lo47 = 10;
    int i;
    for (i = 0; i < 95; i++) {
        y45 = y45 + 2;
        lo47 = y45 + y45;
        y45 = lo48 - y45;
        lo48 = y45 - lo47;
    }
}
int main() { test_func(); return 0; }

