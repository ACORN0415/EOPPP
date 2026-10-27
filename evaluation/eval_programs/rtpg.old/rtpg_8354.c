// RTPG_8354: vars=3 stmts=8
int xn[16];
int yo[16];
void test_func(void) {
    int c14 = 38550;
    int dat93 = 6;
    int z71 = 25005;
    int i;
    for (i = 0; i < 16; i++) {
        c14 = xn[i];
        c14 = z71 + c14;
        dat93 = dat93 + 1;
        z71 = z71 - 4;
        c14 = c14 + c14;
        c14 = c14 + z71;
        c14 = z71;
        z71 = dat93 + dat93;
        dat93 = dat93 - 5;
        yo[i] = c14;
    }
}
int main() { test_func(); return 0; }

