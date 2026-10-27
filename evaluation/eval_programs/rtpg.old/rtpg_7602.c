// RTPG_7602: vars=5 stmts=10
int xn[64];
int yo[64];
void test_func(void) {
    int cnt21 = 24;
    int dat85 = 14;
    int prev81 = 68;
    int cnt45 = 6;
    int cur23 = 64;
    int i;
    for (i = 0; i < 64; i++) {
        prev81 = xn[i];
        dat85 = dat85 - 2;
        prev81 = prev81 - 5;
        cur23 = cnt45;
        cnt21 = cur23 - cur23;
        cur23 = cur23 + cur23;
        prev81 = dat85 + cnt21;
        cur23 = dat85 - 61325;
        cnt21 = prev81;
        cnt45 = prev81 + 10;
        cur23 = cur23 - 5;
        yo[i] = cnt45;
    }
done:
    cur23 = 0;
}
int main() { test_func(); return 0; }

