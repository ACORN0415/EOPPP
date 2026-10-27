// RTPG_2928: vars=3 stmts=8
void test_func(void) {
    int dat80 = -3;
    int b1 = -31;
    int hi62 = -30;
    int i;
    for (i = 0; i < 37; i++) {
        hi62 = b1 - 40843;
        dat80 = b1 + dat80;
        hi62 = b1 + b1;
        b1 = b1 - dat80;
        dat80 = b1 + dat80;
        dat80 = b1;
        hi62 = dat80;
        b1 = hi62 + b1;
        if (dat80 < 96) {
        dat80 = dat80 - 4;
        }
    }
}
int main() { test_func(); return 0; }

