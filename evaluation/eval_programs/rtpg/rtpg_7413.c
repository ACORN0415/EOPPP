// RTPG_7413: vars=5 stmts=5
void test_func(void) {
    double v59 = 70.40;
    int hi2 = 53313;
    int hi76 = 6;
    int tmp3 = -3;
    int cur2 = 7;
    int i;
    for (i = 0; i < 76; i++) {
        v59 = v59 - 2;
        tmp3 = tmp3;
        v59 = v59;
        cur2 = cur2 + 3;
        tmp3 = v59 & cur2;
    }
}
int main() { test_func(); return 0; }

