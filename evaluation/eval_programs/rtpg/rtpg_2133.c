// RTPG_2133: vars=6 stmts=9
int xn[32];
int yo[32];
enum State { OFF, FAST, RED };
void test_func(void) {
    int x90 = 5915;
    int y93 = 10;
    int b64 = 9;
    int val56 = 25;
    int acc78 = 4;
    int b51 = 7;
    enum State st = OFF;
    int h0 = 5;
    int sv0 = 0;
    int h1 = 10;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        x90 = xn[i];
        b51 = val56 * 5;
        x90 = x90 * 24;
        b64 = val56 & y93;
        val56 = val56;
        x90 = y93 & x90;
        val56 = x90 + y93;
        b64 = b64 + b51;
        acc78 = val56;
        b64 = b64 + 3;
        if (x90 == -5) {
        b64 = x90 + 10;
        }
        yo[i] = val56;
    }
}
int main() { test_func(); return 0; }

