// RTPG_4894: vars=10 stmts=4
int xn[16];
int yo[16];
void test_func(void) {
    int val60 = 81;
    float val22 = 48.73;
    int dat21 = 28779;
    int dat11 = 39821;
    int tmp37 = 45;
    int hi65 = 10;
    float out91 = 38.57;
    int cnt43 = 7;
    int prev40 = -30;
    int y96 = 46;
    int i;
    for (i = 0; i < 16; i++) {
        val22 = xn[i];
        dat11 = out91 + 1;
        dat21 = y96 + hi65;
        dat21 = dat21 - 1;
        tmp37 = hi65;
        yo[i] = out91;
    }
}
int main() { test_func(); return 0; }

