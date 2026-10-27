// RTPG_728: vars=10 stmts=5
int xn[32];
int yo[32];
void test_func(void) {
    int x22 = 44;
    int acc37 = 80;
    int x57 = 14827;
    int a17 = 59919;
    int y94 = 22;
    int c61 = 4896;
    int c87 = 10;
    int lo70 = 9;
    int x75 = 73;
    int a66 = 21;
    int i;
    for (i = 0; i < 32; i++) {
        c61 = xn[i];
        lo70 = acc37 & c87;
        c87 = lo70 | a66;
        a17 = a17 + 2;
        c61 = c87 ^ acc37;
        a66 = c61 - 30;
        if (acc37 > 94) {
        acc37 = acc37 - 5;
        }
        yo[i] = lo70;
    }
}
int main() { test_func(); return 0; }

