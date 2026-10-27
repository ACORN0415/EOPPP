// RTPG_9577: vars=4 stmts=3
int xn[64];
int yo[64];
void test_func(void) {
    int y38 = 3;
    int dat55 = 7;
    int acc48 = 9;
    int x34 = -36;
    int i;
    for (i = 0; i < 64; i++) {
        x34 = xn[i];
        x34 = x34 - 3;
        dat55 = dat55 - acc48;
        x34 = x34 + y38;
        if (acc48 != 53) {
        x34 = x34 - 5;
        }
        yo[i] = dat55;
    }
}
int main() { test_func(); return 0; }

