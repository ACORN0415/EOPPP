// RTPG_5717: vars=3 stmts=3
void test_func(void) {
    int b44 = 4;
    int dat1 = 6;
    int c93 = 35;
    int i;
    for (i = 0; i < 32; i++) {
        dat1 = dat1;
        dat1 = b44 + b44;
        b44 = c93 - c93;
        if (dat1 == 85) {
        c93 = b44 - dat1;
        }
    }
}
int main() { test_func(); return 0; }

