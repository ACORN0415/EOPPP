// RTPG_9658: vars=4 stmts=4
void test_func(void) {
    int dat86 = 27;
    int y2 = 2;
    double c37 = 73.34;
    int c94 = 18671;
    int i;
    for (i = 0; i < 36; i++) {
        c94 = dat86;
        y2 = y2 + 2;
        y2 = c37 - c94;
        dat86 = y2 - dat86;
    }
}
int main() { test_func(); return 0; }

