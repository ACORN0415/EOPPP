// RTPG_8712: vars=4 stmts=5
int xn[32];
int yo[32];
enum State { FAST, ON, SLOW };
void test_func(void) {
    int tmp61 = 29494;
    int res75 = 7;
    int lo27 = 91;
    int res29 = 35745;
    enum State st = FAST;
    int h0 = 8;
    int sv0 = 0;
    int h1 = 18126;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        tmp61 = xn[i];
        tmp61 = res29 * 81;
        lo27 = res75 + res29;
        tmp61 = tmp61 + res29;
        tmp61 = lo27;
        res29 = res75;
        yo[i] = res29;
    }
}
int main() { test_func(); return 0; }

