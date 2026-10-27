// RTPG_7523: vars=7 stmts=2
void test_func(void) {
    int a44 = 7664;
    int out48 = 19;
    int cur2 = 42;
    int z80 = 3766;
    int hi46 = 13;
    int hi70 = 41;
    int y17 = 0;
    int i;
    for (i = 0; i < 50; i++) {
        hi46 = z80 - a44;
        z80 = z80 - 4;
    }
done:
    hi70 = 0;
}
int main() { test_func(); return 0; }

