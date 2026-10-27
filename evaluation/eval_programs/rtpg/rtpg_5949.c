// RTPG_5949: vars=5 stmts=5
enum State { FAST, GREEN, OFF };
void test_func(void) {
    int lo10 = -45;
    int sum3 = 7;
    int dat14 = 50607;
    int lo88 = 6;
    int res53 = 30144;
    enum State st = FAST;
    int h0 = 32;
    int sv0 = 0;
    int h1 = 4;
    int sv1 = 0;
    int i;
    for (i = 0; i < 36; i++) {
        res53 = lo10 * -45;
        dat14 = lo88 - lo10;
        lo88 = res53;
        lo10 = dat14;
        sum3 = sum3 + res53;
    }
}
int main() { test_func(); return 0; }

