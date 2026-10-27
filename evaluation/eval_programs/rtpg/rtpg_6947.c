// RTPG_6947: vars=7 stmts=6
int xn[64];
int yo[64];
void test_func(void) {
    int c16 = 10;
    int prev64 = 8;
    int v99 = 2;
    int sum4 = 32793;
    int y79 = 50018;
    int hi45 = 81;
    int prev98 = 64;
    int i;
    for (i = 0; i < 64; i++) {
        v99 = xn[i];
        prev64 = prev64 + prev98;
        c16 = v99 - sum4;
        hi45 = hi45 + 48;
        hi45 = y79 - 10;
        hi45 = v99 - 74;
        v99 = hi45 - 1;
        yo[i] = prev98;
    }
}
int main() { test_func(); return 0; }

