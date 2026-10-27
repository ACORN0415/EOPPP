// RTPG_3470: vars=3 stmts=3
enum State { ON, RED, SLOW };
void test_func(void) {
    int a67 = 17;
    double z63 = 82.40;
    int cur37 = 9;
    enum State st = ON;
    int i;
    for (i = 0; i < 63; i++) {
        z63 = cur37 - z63;
        cur37 = cur37 + cur37;
        a67 = a67 + 4;
        if (a67 != 71) {
        a67 = a67 + 2;
        }
    }
}
int main() { test_func(); return 0; }

