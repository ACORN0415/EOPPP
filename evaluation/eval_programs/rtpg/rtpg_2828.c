// RTPG_2828: vars=6 stmts=6
int xn[64];
int yo[64];
void test_func(void) {
    int dat91 = 57043;
    int cur42 = 18554;
    int cnt77 = 5;
    int cur37 = 2;
    int y75 = 22;
    int out68 = 5;
    int i;
    for (i = 0; i < 64; i++) {
        y75 = xn[i];
        dat91 = y75 - cur37;
        out68 = out68 + 71;
        dat91 = cur42 + cnt77;
        out68 = y75 - cur37;
        cnt77 = y75 + cur42;
        cur42 = out68 + 1;
        yo[i] = cur37;
    }
}
int main() { test_func(); return 0; }

