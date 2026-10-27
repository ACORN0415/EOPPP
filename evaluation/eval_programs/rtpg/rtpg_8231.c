// RTPG_8231: vars=8 stmts=4
int xn[16];
int yo[16];
void test_func(void) {
    int z99 = 35;
    int prev82 = 47;
    int x59 = 38143;
    int cur99 = 34;
    int cur76 = 10;
    int acc12 = -15;
    int out7 = 16;
    int sum57 = 16;
    int i;
    for (i = 0; i < 16; i++) {
        z99 = xn[i];
        acc12 = z99 + out7;
        prev82 = sum57;
        out7 = out7 + cur99;
        sum57 = z99;
        if (out7 != -20) {
        sum57 = prev82 + 5;
        }
        yo[i] = x59;
    }
}
int main() { test_func(); return 0; }

