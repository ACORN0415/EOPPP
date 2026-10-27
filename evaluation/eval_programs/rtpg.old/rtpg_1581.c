// RTPG_1581: vars=4 stmts=6
int xn[16];
int yo[16];
enum State { GREEN, BLUE, OFF };
void test_func(void) {
    int cur54 = 2;
    int hi14 = 2;
    int x68 = -48;
    int dat33 = 6;
    enum State st = GREEN;
    int i;
    for (i = 0; i < 16; i++) {
        cur54 = xn[i];
        cur54 = cur54;
        hi14 = hi14 + 42;
        hi14 = dat33;
        cur54 = x68 + 17170;
        dat33 = x68 + cur54;
        dat33 = x68 - hi14;
        if (hi14 > 35) goto done;
        yo[i] = x68;
    }
done:
    cur54 = 0;
}
int main() { test_func(); return 0; }

