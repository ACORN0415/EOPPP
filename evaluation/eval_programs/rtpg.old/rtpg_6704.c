// RTPG_6704: vars=8 stmts=6
int xn[32];
int yo[32];
enum State { SLOW, FAST, RED };
void test_func(void) {
    int a45 = 1;
    int dat3 = 14514;
    int prev43 = 625;
    int cnt17 = 3;
    int tmp47 = 6;
    int sum84 = 85;
    int cur79 = 93;
    int acc42 = 5;
    enum State st = SLOW;
    int i;
    for (i = 0; i < 32; i++) {
        acc42 = xn[i];
        dat3 = prev43 + sum84;
        sum84 = a45 + sum84;
        dat3 = a45 - 3;
        sum84 = a45;
        prev43 = prev43 - 3;
        dat3 = tmp47 + acc42;
        if (prev43 != 44) {
        cur79 = cur79 + 26;
        }
        yo[i] = dat3;
    }
}
int main() { test_func(); return 0; }

