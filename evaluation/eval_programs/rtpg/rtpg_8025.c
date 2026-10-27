// RTPG_8025: vars=5 stmts=8
void test_func(void) {
    int x59 = 44862;
    double val0 = 63.14;
    float sum66 = 28.10;
    int b80 = 5;
    int v44 = -31;
    int i;
    for (i = 0; i < 97; i++) {
        b80 = val0;
        v44 = sum66 + 25;
        v44 = b80 + 2;
        sum66 = v44 & x59;
        x59 = val0 + sum66;
        val0 = val0 ^ b80;
        sum66 = x59 - val0;
        sum66 = x59 / b80;
    }
}
int main() { test_func(); return 0; }

