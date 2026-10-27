// RTPG_4753: vars=9 stmts=4
int xn[16];
int yo[16];
void test_func(void) {
    int prev61 = 6863;
    int x7 = -30;
    int res17 = 16;
    int out66 = 38600;
    int hi18 = 41489;
    int hi53 = 66;
    int b4 = 58;
    int acc83 = 10904;
    int v48 = 8;
    int i;
    for (i = 0; i < 16; i++) {
        acc83 = xn[i];
        hi18 = hi18 + 1;
        x7 = x7 + acc83;
        x7 = hi18 - prev61;
        out66 = b4 - x7;
        yo[i] = hi18;
    }
}
int main() { test_func(); return 0; }

