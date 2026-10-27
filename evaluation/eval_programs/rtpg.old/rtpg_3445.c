// RTPG_3445: vars=6 stmts=5
int xn[64];
int yo[64];
void test_func(void) {
    int dat76 = 78;
    int val68 = 44423;
    int tmp98 = 61321;
    int b59 = 15;
    int cur98 = 10;
    int a4 = 62204;
    int h0 = 44;
    int sv0 = 0;
    int h1 = 40;
    int sv1 = 0;
    int h2 = 46;
    int sv2 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        tmp98 = xn[i];
        a4 = a4 - 3;
        tmp98 = b59 - dat76;
        cur98 = val68 - tmp98;
        b59 = dat76 * 2;
        dat76 = val68 + a4;
        if (cur98 != 59) {
        cur98 = val68 + 1;
        }
        yo[i] = tmp98;
    }
}
int main() { test_func(); return 0; }

