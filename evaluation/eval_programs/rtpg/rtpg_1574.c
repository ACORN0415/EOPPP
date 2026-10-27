// RTPG_1574: vars=4 stmts=3
enum State { SLOW, GREEN, ON };
void test_func(void) {
    int z4 = 19;
    int lo30 = 46;
    int x34 = -47;
    int z24 = 5;
    enum State st = SLOW;
    int i;
    for (i = 0; i < 12; i++) {
        x34 = lo30 - 14;
        x34 = z24 - x34;
        z24 = z24 % z4;
        if (x34 != 58) {
        z4 = z4 + z24;
        }
    }
}
int main() { test_func(); return 0; }

