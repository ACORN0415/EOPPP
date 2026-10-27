// RTPG_8643: vars=6 stmts=6
void test_func(void) {
    int acc56 = -24;
    double cur45 = 44.40;
    double cnt4 = 93.12;
    int out0 = 39714;
    int c13 = 9;
    float res63 = 51.19;
    int i;
    for (i = 0; i < 45; i++) {
        acc56 = acc56 + out0;
        out0 = res63 + cnt4;
        res63 = res63 & cnt4;
        out0 = acc56;
        out0 = cnt4 | cnt4;
        acc56 = res63 ^ cnt4;
    }
}
int main() { test_func(); return 0; }

