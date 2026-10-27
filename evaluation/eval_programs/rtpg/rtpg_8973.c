// RTPG_8973: vars=4 stmts=4
enum State { OFF, SLOW, RED };
void test_func(void) {
    int c68 = 5;
    int acc21 = -36;
    int cnt22 = 50;
    int acc60 = 9;
    enum State st = OFF;
    int i;
    for (i = 0; i < 55; i++) {
        c68 = cnt22 % acc21;
        acc60 = cnt22 & acc60;
        c68 = c68 % acc21;
        acc21 = acc60 - acc60;
    }
}
int main() { test_func(); return 0; }

