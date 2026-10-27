// RTPG_8603: vars=8 stmts=4
int xn[16];
int yo[16];
void test_func(void) {
    int b44 = 10;
    int cnt57 = 87;
    int y64 = 47;
    int out94 = 7;
    int y8 = 8911;
    int c39 = 58065;
    int dat99 = 16580;
    int a73 = 30;
    int *ptr = &b44;
    int h0 = 7;
    int sv0 = 0;
    int h1 = 67;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        b44 = xn[i];
        y8 = c39 * 18;
        c39 = a73 - y8;
        y8 = dat99 * -48;
        y8 = dat99 % b44;
        *ptr = *ptr + 3;
        yo[i] = y8;
    }
}
int main() { test_func(); return 0; }

