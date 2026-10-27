// RTPG_5898: vars=13 stmts=11
enum State { SLOW, OFF, BLUE };
void test_func(void) {
    int cnt12 = 97;
    int hi92 = -15;
    int v75 = 1;
    double res64 = 20.72;
    int acc72 = 1;
    float prev87 = 57.72;
    double a69 = 6.61;
    int b73 = 18;
    int v45 = 5;
    double prev90 = 89.48;
    int y7 = 4;
    int cur12 = 21;
    int b34 = -6;
    enum State st = SLOW;
    int *ptr = &b73;
    int i;
    for (i = 0; i < 48; i++) {
        b34 = b73;
        prev90 = y7;
        acc72 = a69 + v45;
        v75 = b73;
        v45 = hi92;
        v75 = v75 + 16885;
        v75 = cnt12 - acc72;
        res64 = cnt12 + res64;
        y7 = a69 - 1360;
        acc72 = v75 - res64;
        b73 = v45 - a69;
        *ptr = *ptr + 3;
        if (cur12 != 64) {
        hi92 = cnt12;
        }
    }
}
int main() { test_func(); return 0; }

