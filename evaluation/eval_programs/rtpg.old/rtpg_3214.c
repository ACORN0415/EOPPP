// RTPG_3214: vars=7 stmts=5
int xn[16];
int yo[16];
enum State { SLOW, ON, RED };
void test_func(void) {
    int x43 = 52;
    int z19 = 38095;
    int lo50 = 7;
    int prev73 = 9;
    int z1 = 3;
    int cur87 = 95;
    int tmp56 = 52178;
    enum State st = SLOW;
    int h0 = 8;
    int sv0 = 0;
    int h1 = 10;
    int sv1 = 0;
    int h2 = 47;
    int sv2 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        cur87 = xn[i];
        tmp56 = tmp56 * -32;
        prev73 = cur87 * 3;
        z1 = cur87 + 39;
        prev73 = x43 / cur87;
        tmp56 = lo50 * 19694;
        yo[i] = prev73;
    }
}
int main() { test_func(); return 0; }

