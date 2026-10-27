// RTPG_2014: vars=6 stmts=3
int xn[32];
int yo[32];
enum State { SLOW, ON, GREEN };
void test_func(void) {
    int a24 = -10;
    int dat29 = 9;
    int tmp85 = 3;
    int tmp47 = 3;
    int acc11 = 4;
    int val36 = 13;
    enum State st = SLOW;
    int h0 = 6;
    int sv0 = 0;
    int h1 = 38;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        tmp85 = xn[i];
        tmp47 = tmp47 + 1;
        acc11 = dat29 - acc11;
        val36 = val36;
        yo[i] = dat29;
    }
}
int main() { test_func(); return 0; }

