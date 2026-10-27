// RTPG_8291: vars=3 stmts=3
void test_func(void) {
    int c5 = 68;
    int prev86 = 0;
    int acc31 = 15376;
    int i;
    for (i = 0; i < 30; i++) {
        prev86 = prev86 - 1;
        c5 = prev86 + acc31;
        c5 = c5 - 10;
        if (acc31 == -23) {
        c5 = prev86 + 2;
        }
    }
}
int main() { test_func(); return 0; }

