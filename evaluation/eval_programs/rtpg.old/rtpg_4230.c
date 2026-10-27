// RTPG_4230: vars=5 stmts=4
int xn[32];
int yo[32];
enum State { BLUE, SLOW, OFF };
void test_func(void) {
    int a67 = 68;
    int z69 = 19464;
    int dat43 = 37;
    int a82 = 45904;
    int sum36 = -40;
    enum State st = BLUE;
    int i;
    for (i = 0; i < 32; i++) {
        a67 = xn[i];
        sum36 = dat43 + z69;
        a82 = sum36 + -50;
        dat43 = a82 + a67;
        a67 = dat43 - sum36;
        yo[i] = sum36;
    }
}
int main() { test_func(); return 0; }

