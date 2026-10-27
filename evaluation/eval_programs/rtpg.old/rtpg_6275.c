// RTPG_6275: vars=4 stmts=5
enum State { FAST, ON, GREEN };
void test_func(void) {
    int y2 = -35;
    int y15 = 35363;
    int dat36 = 29603;
    int cnt87 = 33;
    enum State st = FAST;
    int h0 = 47;
    int sv0 = 0;
    int h1 = 160;
    int sv1 = 0;
    int i;
    for (i = 0; i < 14; i++) {
        y15 = y2 ^ dat36;
        cnt87 = dat36 % y15;
        dat36 = dat36 - 75;
        dat36 = y15 / dat36;
        y15 = dat36 ^ dat36;
    }
}
int main() { test_func(); return 0; }

