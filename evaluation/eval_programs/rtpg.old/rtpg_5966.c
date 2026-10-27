// RTPG_5966: vars=4 stmts=5
int xn[32];
int yo[32];
void test_func(void) {
    int cnt23 = 10;
    int acc79 = 4;
    int v58 = -18;
    int sum24 = 52;
    int i;
    for (i = 0; i < 32; i++) {
        v58 = xn[i];
        v58 = cnt23 + -46;
        acc79 = acc79 + cnt23;
        cnt23 = cnt23 - 5;
        sum24 = v58 - v58;
        acc79 = sum24 - v58;
        if (sum24 <= -19) {
        v58 = v58 - sum24;
        }
        yo[i] = v58;
    }
}
int main() { test_func(); return 0; }

