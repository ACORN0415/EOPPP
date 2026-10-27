// RTPG_2440: vars=5 stmts=2
int xn[32];
int yo[32];
enum State { BLUE, SLOW, GREEN };
void test_func(void) {
    int prev59 = 37630;
    int acc27 = 40697;
    int sum32 = 7;
    int dat76 = 27;
    int cur45 = -34;
    enum State st = BLUE;
    int h0 = 14;
    int sv0 = 0;
    int h1 = 7;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        prev59 = xn[i];
        acc27 = acc27 - 5;
        acc27 = sum32 - prev59;
        yo[i] = prev59;
    }
}
int main() { test_func(); return 0; }

