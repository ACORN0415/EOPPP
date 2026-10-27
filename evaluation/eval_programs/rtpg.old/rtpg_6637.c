// RTPG_6637: vars=7 stmts=9
int xn[16];
int yo[16];
void test_func(void) {
    int acc93 = 7;
    int hi61 = 17;
    int tmp44 = 44;
    int cur99 = -16;
    int y62 = 60;
    int a83 = 3774;
    int y53 = 4;
    int i;
    for (i = 0; i < 16; i++) {
        y62 = xn[i];
        cur99 = cur99 - 4;
        a83 = a83 - 3;
        y53 = y62 + tmp44;
        a83 = a83 - 4;
        tmp44 = tmp44;
        cur99 = hi61 + tmp44;
        y62 = a83 + 3;
        a83 = cur99 - y62;
        cur99 = hi61 + 10;
        if (a83 > 70) {
        tmp44 = cur99 - hi61;
        }
        yo[i] = tmp44;
    }
}
int main() { test_func(); return 0; }

