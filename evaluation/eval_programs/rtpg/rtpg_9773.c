// RTPG_9773: vars=4 stmts=3
int xn[64];
int yo[64];
void test_func(void) {
    int acc48 = 3;
    int y38 = 7;
    int x34 = 9;
    int dat55 = -36;
    int i;
    for (i = 0; i < 64; i++) {
        dat55 = xn[i];
        dat55 = dat55 - 3;
        y38 = y38 - x34;
        dat55 = dat55 + acc48;
        if (x34 != 53) {
        dat55 = dat55 - 5;
        }
        yo[i] = y38;
    }
}
int main() { test_func(); return 0; }

