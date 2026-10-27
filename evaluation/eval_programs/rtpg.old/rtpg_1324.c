// RTPG_1324: vars=3 stmts=4
enum State { ON, BLUE, FAST };
void test_func(void) {
    int z29 = 61704;
    int acc12 = 39;
    int x96 = 2;
    enum State st = ON;
    int h0 = 75;
    int sv0 = 0;
    int h1 = 55532;
    int sv1 = 0;
    int i;
    for (i = 0; i < 24; i++) {
        z29 = acc12 - x96;
        z29 = x96 + z29;
        z29 = z29 + 7;
        z29 = z29 - z29;
        if (z29 < -27) {
        x96 = x96 - z29;
        }
    }
}
int main() { test_func(); return 0; }

