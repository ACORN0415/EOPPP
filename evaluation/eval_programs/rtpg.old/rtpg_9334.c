// RTPG_9334: vars=8 stmts=9
enum State { SLOW, GREEN, RED };
void test_func(void) {
    int res16 = 3;
    int tmp30 = 10505;
    int cur69 = 37411;
    int a92 = 44;
    int prev13 = 2;
    int dat23 = 35;
    int b98 = -35;
    int z77 = 7;
    enum State st = SLOW;
    int i;
    for (i = 0; i < 27; i++) {
        cur69 = a92 + 91;
        tmp30 = dat23 + 3;
        b98 = res16 - 78;
        tmp30 = dat23;
        cur69 = prev13 + prev13;
        dat23 = a92 - b98;
        cur69 = prev13 - a92;
        cur69 = res16 + a92;
        a92 = z77;
    }
}
int main() { test_func(); return 0; }

