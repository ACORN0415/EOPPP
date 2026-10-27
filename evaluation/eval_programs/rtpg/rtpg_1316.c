// RTPG_1316: vars=3 stmts=4
enum State { ON, BLUE, FAST };
void test_func(void) {
    int acc12 = 61704;
    int z29 = 39;
    int x96 = 2;
    enum State st = ON;
    int h0 = 75;
    int sv0 = 0;
    int h1 = 55532;
    int sv1 = 0;
    int i;
    for (i = 0; i < 24; i++) {
        acc12 = z29 - x96;
        acc12 = x96 + acc12;
        acc12 = acc12 + 7;
        acc12 = acc12 - acc12;
        if (acc12 < -27) {
        x96 = x96 - acc12;
        }
    }
}
int main() { test_func(); return 0; }

