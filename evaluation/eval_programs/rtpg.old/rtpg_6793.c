// RTPG_6793: vars=3 stmts=7
enum State { FAST, BLUE, GREEN };
void test_func(void) {
    int acc76 = 6;
    int tmp80 = 45;
    int acc7 = 27304;
    enum State st = FAST;
    int i;
    for (i = 0; i < 90; i++) {
        tmp80 = tmp80 + tmp80;
        acc76 = acc76 + 4;
        tmp80 = acc7 - acc7;
        acc7 = acc7 - 2;
        acc76 = acc76 - 4;
        tmp80 = tmp80;
        acc7 = acc76;
    }
}
int main() { test_func(); return 0; }

