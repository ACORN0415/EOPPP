// RTPG_9981: vars=4 stmts=2
int xn[32];
int yo[32];
enum State { SLOW, RED, BLUE };
void test_func(void) {
    int acc11 = 16;
    int sum2 = 3;
    int cnt44 = 57389;
    int res42 = 38283;
    enum State st = SLOW;
    int h0 = 10;
    int sv0 = 0;
    int h1 = -2;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        res42 = xn[i];
        sum2 = acc11 - cnt44;
        res42 = sum2 + cnt44;
        yo[i] = cnt44;
    }
}
int main() { test_func(); return 0; }

