// RTPG_6739: vars=4 stmts=2
int xn[64];
int yo[64];
void test_func(void) {
    int cnt60 = -16;
    int acc55 = 55;
    int y42 = 37990;
    int c32 = 95;
    int i;
    for (i = 0; i < 64; i++) {
        c32 = xn[i];
        acc55 = acc55 + cnt60;
        c32 = c32 + y42;
        yo[i] = acc55;
    }
}
int main() { test_func(); return 0; }

