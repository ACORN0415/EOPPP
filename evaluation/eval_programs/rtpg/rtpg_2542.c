// RTPG_2542: vars=6 stmts=6
int xn[32];
int yo[32];
void test_func(void) {
    int a65 = 7;
    int cur73 = 5;
    int prev71 = 39061;
    int y87 = 32;
    int acc90 = -3;
    int c92 = 5554;
    int i;
    for (i = 0; i < 90; i++) {
        int j;
        for (j = 0; j < 13; j++) {
        acc90 = acc90 + 2;
        a65 = acc90 - c92;
        cur73 = cur73 - 1;
        prev71 = prev71 - 3;
        acc90 = c92 - c92;
        acc90 = y87;
        }
    }
}
int main() { test_func(); return 0; }

