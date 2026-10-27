// RTPG_6178: vars=5 stmts=10
void test_func(void) {
    int a14 = 65069;
    int dat18 = 39981;
    int dat76 = 0;
    int lo57 = 63229;
    int cur55 = 48576;
    int i;
    for (i = 0; i < 23; i++) {
        lo57 = a14 + cur55;
        cur55 = cur55 - dat76;
        dat18 = a14 ^ cur55;
        dat76 = dat18 + dat18;
        dat18 = dat18 - 4;
        a14 = lo57;
        cur55 = cur55 + dat76;
        dat76 = lo57 - cur55;
        lo57 = a14 / dat18;
        a14 = a14 - dat76;
        if (cur55 > 31) {
        dat76 = dat18;
        }
    }
}
int main() { test_func(); return 0; }

