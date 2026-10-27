// RTPG_4269: vars=4 stmts=8
int xn[16];
int yo[16];
void test_func(void) {
    int val56 = 72;
    int cnt19 = 65057;
    int cnt57 = 74;
    int acc73 = 6;
    int *ptr = &cnt19;
    int i;
    for (i = 0; i < 16; i++) {
        acc73 = xn[i];
        acc73 = cnt57 - 9;
        cnt57 = cnt19 - cnt57;
        cnt19 = acc73;
        val56 = cnt19 - 2;
        cnt57 = cnt57 + 2;
        acc73 = val56 + 10;
        val56 = val56 - 1;
        val56 = val56 + 18;
        *ptr = *ptr + 3;
        if (val56 >= -16) {
        cnt57 = val56 - cnt19;
        }
        yo[i] = val56;
    }
}
int main() { test_func(); return 0; }

