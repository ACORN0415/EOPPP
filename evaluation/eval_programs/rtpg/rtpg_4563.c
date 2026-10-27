// RTPG_4563: vars=10 stmts=7
int xn[32];
int yo[32];
enum State { FAST, SLOW, BLUE };
void test_func(void) {
    int v40 = 81;
    int cur78 = 3;
    int val23 = 3;
    int c21 = 10;
    int sum63 = 37;
    int v57 = 10;
    int x84 = 43;
    int cnt22 = 1;
    int v73 = 0;
    int out81 = -39;
    enum State st = FAST;
    int i;
    for (i = 0; i < 32; i++) {
        cur78 = xn[i];
        v40 = v57 + 14;
        cnt22 = sum63 % v40;
        out81 = sum63 + 15335;
        c21 = x84 - cur78;
        val23 = cnt22 + 51471;
        v40 = out81;
        cnt22 = cnt22 - 30;
        if (v40 < -48) {
        v57 = sum63 - out81;
        }
        yo[i] = x84;
    }
}
int main() { test_func(); return 0; }

