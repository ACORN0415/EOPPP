// RTPG_1236: vars=8 stmts=8
void test_func(void) {
    int acc13 = 3;
    int cur16 = 2;
    double z26 = 42.92;
    float sum23 = 84.90;
    int c45 = 83;
    double v54 = 6.35;
    int out38 = 4;
    int a40 = 87;
    int i;
    for (i = 0; i < 9; i++) {
        z26 = acc13 - cur16;
        sum23 = v54;
        a40 = a40 - 2;
        acc13 = out38 | v54;
        acc13 = acc13 - 1;
        v54 = out38 / cur16;
        z26 = a40 + cur16;
        cur16 = sum23 + out38;
    }
}
int main() { test_func(); return 0; }

