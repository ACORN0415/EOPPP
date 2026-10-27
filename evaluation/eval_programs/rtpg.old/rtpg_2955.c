// RTPG_2955: vars=5 stmts=3
enum State { OFF, BLUE, SLOW };
void test_func(void) {
    int c20 = 76;
    int prev25 = 7882;
    int tmp85 = 16;
    int cur3 = 33028;
    int a22 = 66;
    enum State st = OFF;
    int i;
    for (i = 0; i < 78; i++) {
        cur3 = cur3 | tmp85;
        a22 = c20 ^ c20;
        c20 = tmp85 + cur3;
        if (a22 == -25) {
        a22 = tmp85 - prev25;
        }
    }
}
int main() { test_func(); return 0; }

