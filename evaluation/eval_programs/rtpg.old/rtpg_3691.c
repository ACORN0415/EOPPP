// RTPG_3691: vars=3 stmts=2
enum State { SLOW, GREEN, ON };
void test_func(void) {
    float dat43 = 1.03;
    double out54 = 47.10;
    int a14 = -1;
    enum State st = SLOW;
    int i;
    for (i = 0; i < 58; i++) {
        a14 = dat43 - out54;
        out54 = a14 + 7;
        if (dat43 <= 4) {
        dat43 = dat43;
        }
    }
}
int main() { test_func(); return 0; }

