// RTPG_4817: vars=4 stmts=3
enum State { ON, RED, BLUE };
void test_func(void) {
    int c90 = 1;
    int prev68 = 52413;
    int dat93 = 37783;
    double out26 = 88.82;
    enum State st = ON;
    int i;
    for (i = 0; i < 37; i++) {
        c90 = c90 + 3;
        dat93 = out26 - c90;
        out26 = prev68 - prev68;
    }
}
int main() { test_func(); return 0; }

