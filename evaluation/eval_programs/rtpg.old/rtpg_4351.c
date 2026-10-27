// RTPG_4351: vars=10 stmts=2
int xn[16];
int yo[16];
void test_func(void) {
    int v33 = 7;
    int res71 = 24;
    int b53 = 5;
    int a44 = 1;
    int prev58 = 51137;
    int b6 = -28;
    int x10 = 1;
    int acc26 = 3;
    int b99 = 31457;
    int v19 = 2;
    int i;
    for (i = 0; i < 16; i++) {
        v19 = xn[i];
        b6 = prev58 + a44;
        res71 = a44;
        yo[i] = a44;
    }
}
int main() { test_func(); return 0; }

