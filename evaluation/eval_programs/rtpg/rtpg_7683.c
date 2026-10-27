// RTPG_7683: vars=5 stmts=10
int xn[64];
int yo[64];
void test_func(void) {
    int dat85 = 24;
    int cnt21 = 14;
    int cnt45 = 68;
    int cur23 = 6;
    int prev81 = 64;
    int i;
    for (i = 0; i < 64; i++) {
        cnt45 = xn[i];
        cnt21 = cnt21 - 2;
        cnt45 = cnt45 - 5;
        prev81 = cur23;
        dat85 = prev81 - prev81;
        prev81 = prev81 + prev81;
        cnt45 = cnt21 + dat85;
        prev81 = cnt21 - 61325;
        dat85 = cnt45;
        cur23 = cnt45 + 10;
        prev81 = prev81 - 5;
        yo[i] = cur23;
    }
}
int main() { test_func(); return 0; }

