// RTPG_4289: vars=3 stmts=5
void test_func(void) {
    int dat50 = 2;
    int lo47 = 5;
    int out0 = 24;
    int i;
    for (i = 0; i < 53; i++) {
        out0 = out0 - dat50;
        out0 = lo47 - 1;
        dat50 = out0 + 18;
        lo47 = lo47 + 4;
        out0 = lo47 - out0;
    }
}
int main() { test_func(); return 0; }

