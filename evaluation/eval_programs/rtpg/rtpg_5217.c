// RTPG_5217: vars=10 stmts=3
int xn[32];
int yo[32];
void test_func(void) {
    int tmp59 = 12491;
    int dat24 = 44185;
    int cnt57 = 96;
    int cur41 = 32631;
    int dat68 = 1;
    int v22 = 28;
    int x13 = -29;
    int prev31 = 91;
    int dat86 = 8;
    int out84 = 93;
    int i;
    for (i = 0; i < 32; i++) {
        prev31 = xn[i];
        v22 = cur41 + prev31;
        prev31 = cur41 + x13;
        x13 = x13 + 3;
        if (tmp59 != 76) {
        cnt57 = v22 - 38788;
        }
        yo[i] = tmp59;
    }
}
int main() { test_func(); return 0; }

