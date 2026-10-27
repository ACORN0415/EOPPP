// RTPG_1596: vars=7 stmts=6
int xn[32];
int yo[32];
enum State { FAST, RED, SLOW };
void test_func(void) {
    int acc64 = 38;
    int a57 = -24;
    int b33 = 2;
    int b98 = 1;
    int hi64 = 2590;
    int acc85 = 9;
    int hi84 = -20;
    enum State st = FAST;
    int h0 = 8;
    int sv0 = 0;
    int h1 = 38;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        a57 = xn[i];
        a57 = a57 + 4;
        b98 = b98 * 14570;
        b98 = acc64 * 40404;
        a57 = a57 + 2;
        acc64 = acc64 * 0;
        acc85 = hi64 * 3;
        if (acc64 == 40) {
        hi84 = hi84 - 40;
        }
        yo[i] = acc85;
    }
}
int main() { test_func(); return 0; }

