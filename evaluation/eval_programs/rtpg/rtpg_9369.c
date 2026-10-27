// RTPG_9369: vars=7 stmts=3
int xn[32];
int yo[32];
enum State { OFF, BLUE, ON };
void test_func(void) {
    int sum19 = 76;
    float prev28 = 6.39;
    int acc54 = 1;
    int z18 = 17;
    int cur69 = 17632;
    int b5 = 16;
    int lo15 = 68;
    enum State st = OFF;
    int i;
    for (i = 0; i < 32; i++) {
        z18 = xn[i];
        z18 = prev28 - acc54;
        acc54 = acc54 - 5;
        lo15 = lo15 + 13894;
        yo[i] = sum19;
    }
}
int main() { test_func(); return 0; }

