// RTPG_1518: vars=10 stmts=12
enum State { FAST, BLUE, SLOW };
void test_func(void) {
    int cur89 = 25505;
    int res89 = 57;
    int dat16 = 89;
    int c59 = -26;
    int b79 = 51331;
    int lo78 = -37;
    int tmp18 = 94;
    int cur37 = 78;
    int tmp47 = 3;
    int prev45 = 9873;
    enum State st = FAST;
    int h0 = 17103;
    int sv0 = 0;
    int h1 = 2;
    int sv1 = 0;
    int h2 = 11113;
    int sv2 = 0;
    int i;
    for (i = 0; i < 53; i++) {
        dat16 = res89 % cur37;
        b79 = b79 ^ lo78;
        res89 = prev45 & tmp47;
        b79 = lo78 | prev45;
        dat16 = dat16 ^ tmp18;
        cur37 = b79 + dat16;
        prev45 = tmp18;
        c59 = tmp18 + b79;
        dat16 = dat16 - 5;
        b79 = cur37 - prev45;
        tmp18 = dat16 % cur37;
        tmp47 = b79 / cur89;
        if (dat16 >= 88) {
        cur37 = tmp18 + tmp18;
        }
    }
}
int main() { test_func(); return 0; }

