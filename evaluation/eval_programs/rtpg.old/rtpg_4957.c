// RTPG_4957: vars=9 stmts=7
int xn[32];
int yo[32];
enum State { GREEN, ON, OFF };
void test_func(void) {
    int cnt67 = 32;
    int v17 = 0;
    int out44 = 63717;
    int lo56 = 30;
    int cnt29 = 0;
    int tmp53 = 1595;
    int out28 = 46;
    int x58 = 5;
    double cur86 = 72.86;
    enum State st = GREEN;
    int i;
    for (i = 0; i < 32; i++) {
        out44 = xn[i];
        out28 = out28 + 1;
        lo56 = lo56 + 1;
        out44 = out44 + 2;
        cnt29 = cnt67;
        out28 = tmp53 - x58;
        out28 = cur86;
        out28 = v17 + cnt67;
        yo[i] = cnt29;
    }
}
int main() { test_func(); return 0; }

