// RTPG_8229: vars=6 stmts=11
enum State { GREEN, SLOW, OFF };
void test_func(void) {
    int sum43 = 39362;
    int dat80 = 44;
    int hi7 = -22;
    int out33 = 5;
    int out68 = -26;
    int y44 = 20822;
    enum State st = GREEN;
    int i;
    for (i = 0; i < 73; i++) {
        out68 = dat80 & hi7;
        sum43 = hi7 - sum43;
        y44 = out68 | out33;
        y44 = sum43 | dat80;
        hi7 = sum43 | out33;
        dat80 = y44;
        hi7 = out68 - y44;
        out33 = dat80 & out33;
        out68 = out68 ^ hi7;
        dat80 = out68;
        y44 = y44;
    }
}
int main() { test_func(); return 0; }

