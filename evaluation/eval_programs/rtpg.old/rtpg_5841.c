// RTPG_5841: vars=3 stmts=3
int xn[32];
int yo[32];
enum State { GREEN, RED, OFF };
void test_func(void) {
    int a86 = 9690;
    int cnt84 = 53562;
    int x36 = 10;
    enum State st = GREEN;
    int i;
    for (i = 0; i < 32; i++) {
        x36 = xn[i];
        cnt84 = x36;
        a86 = a86 - 1;
        x36 = x36 - 1;
        yo[i] = cnt84;
    }
}
int main() { test_func(); return 0; }

