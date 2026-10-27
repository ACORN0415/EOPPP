// RTPG_3641: vars=4 stmts=7
int xn[32];
int yo[32];
void test_func(void) {
    int hi53 = 44;
    int val0 = 47494;
    int cnt13 = -1;
    int cur18 = -47;
    int i;
    for (i = 0; i < 32; i++) {
        hi53 = xn[i];
        val0 = cnt13 + val0;
        cur18 = val0 + 9;
        cnt13 = hi53;
        cnt13 = cur18 - hi53;
        cur18 = hi53 + cur18;
        cur18 = cur18;
        val0 = cnt13 - 5;
        if (val0 >= 36) {
        cnt13 = cnt13 + cnt13;
        }
        yo[i] = val0;
    }
}
int main() { test_func(); return 0; }

