// RTPG_1222: vars=8 stmts=8
void test_func(void) {
    int cur16 = 3;
    int sum23 = 2;
    double c45 = 42.92;
    float out38 = 84.90;
    int a40 = 83;
    double acc13 = 6.35;
    int v54 = 4;
    int z26 = 87;
    int i;
    for (i = 0; i < 9; i++) {
        c45 = cur16 - sum23;
        out38 = acc13;
        z26 = z26 - 2;
        cur16 = v54 | c45;
        cur16 = cur16 - 1;
        acc13 = v54 / cur16;
        c45 = z26 + sum23;
        sum23 = out38 + v54;
    }
}
int main() { test_func(); return 0; }

