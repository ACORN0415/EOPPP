// RTPG_231: vars=3 stmts=4
void test_func(void) {
    int lo48 = -38;
    int lo47 = 0;
    int y45 = 10;
    int i;
    for (i = 0; i < 95; i++) {
        lo47 = lo47 + 2;
        y45 = lo47 + lo47;
        lo47 = lo48 - lo47;
        lo48 = lo47 - y45;
    }
}
int main() { test_func(); return 0; }

