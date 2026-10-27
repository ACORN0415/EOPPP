// RTPG_6570: vars=3 stmts=6
void test_func(void) {
    int v20 = 2;
    int x6 = 3;
    int dat39 = 90;
    int i;
    for (i = 0; i < 35; i++) {
        dat39 = x6 - 60634;
        dat39 = dat39 - 1;
        dat39 = dat39 + v20;
        dat39 = v20 - x6;
        dat39 = x6 + v20;
        x6 = x6 - 3;
        if (dat39 < 59) {
        v20 = dat39;
        }
    }
}
int main() { test_func(); return 0; }

