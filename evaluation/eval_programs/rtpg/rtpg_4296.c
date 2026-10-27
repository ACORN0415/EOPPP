// RTPG_4296: vars=9 stmts=3
enum State { FAST, SLOW, BLUE };
void test_func(void) {
    int dat49 = 10;
    double acc86 = 74.58;
    int tmp1 = 10;
    int tmp74 = 47;
    int cur73 = 55983;
    int cnt10 = 75;
    int x16 = -49;
    float tmp47 = 30.13;
    double a38 = 43.64;
    enum State st = FAST;
    int i;
    for (i = 0; i < 22; i++) {
        tmp74 = cur73;
        cur73 = cur73 + 5;
        tmp47 = dat49 + 4;
    }
}
int main() { test_func(); return 0; }

