// RTPG_9758: vars=4 stmts=2
int xn[32];
int yo[32];
enum State { SLOW, RED, BLUE };
void test_func(void) {
    int acc11 = 16;
    int res42 = 3;
    int sum2 = 57389;
    int cnt44 = 38283;
    enum State st = SLOW;
    int h0 = 10;
    int sv0 = 0;
    int h1 = -2;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        cnt44 = xn[i];
        res42 = acc11 - sum2;
        cnt44 = res42 + sum2;
        yo[i] = sum2;
    }
}
int main() { test_func(); return 0; }

