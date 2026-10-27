// RTPG_9219: vars=9 stmts=2
enum State { FAST, ON, OFF };
void test_func(void) {
    int val4 = 49007;
    int z32 = 37;
    int out90 = 93;
    int dat60 = 36;
    int a17 = 47;
    int out4 = 37;
    int val1 = -49;
    int cnt60 = 76;
    int prev4 = 0;
    enum State st = FAST;
    int i;
    for (i = 0; i < 43; i++) {
        cnt60 = dat60;
        out90 = z32 + prev4;
    }
}
int main() { test_func(); return 0; }

