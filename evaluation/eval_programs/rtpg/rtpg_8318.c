// RTPG_8318: vars=7 stmts=5
enum State { OFF, BLUE, FAST };
void test_func(void) {
    int val1 = 37876;
    int z36 = 4;
    int out26 = 82;
    int prev90 = 9;
    int out75 = 36;
    int c65 = 65;
    int a98 = 7;
    enum State st = OFF;
    int i;
    for (i = 0; i < 9; i++) {
        z36 = out75 - z36;
        out26 = val1;
        prev90 = out26;
        a98 = a98 + 1;
        c65 = prev90 + 23;
        if (c65 < 28) {
        c65 = prev90;
        }
    }
}
int main() { test_func(); return 0; }

