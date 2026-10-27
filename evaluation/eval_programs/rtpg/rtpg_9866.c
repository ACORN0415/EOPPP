// RTPG_9866: vars=4 stmts=4
void test_func(void) {
    int y2 = 27;
    int c37 = 2;
    double c94 = 73.34;
    int dat86 = 18671;
    int i;
    for (i = 0; i < 36; i++) {
        dat86 = y2;
        c37 = c37 + 2;
        c37 = c94 - dat86;
        y2 = c37 - y2;
    }
}
int main() { test_func(); return 0; }

