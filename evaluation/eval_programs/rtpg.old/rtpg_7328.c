// RTPG_7328: vars=5 stmts=4
int xn[16];
int yo[16];
void test_func(void) {
    int acc17 = 15;
    int out12 = 59;
    int val60 = 2861;
    int cur86 = 0;
    int y76 = 1;
    int i;
    for (i = 0; i < 16; i++) {
        acc17 = xn[i];
        val60 = y76;
        val60 = y76 + acc17;
        y76 = y76 + 4;
        cur86 = acc17 | cur86;
        yo[i] = acc17;
    }
}
int main() { test_func(); return 0; }

