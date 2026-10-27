// RTPG_9772: vars=4 stmts=5
int xn[16];
int yo[16];
void test_func(void) {
    int cnt40 = 52270;
    int prev70 = 8;
    int a30 = 4;
    int acc75 = 8625;
    int *ptr = &cnt40;
    int i;
    for (i = 0; i < 16; i++) {
        prev70 = xn[i];
        cnt40 = a30 - prev70;
        cnt40 = cnt40 + 6;
        a30 = a30 - 4;
        prev70 = prev70;
        cnt40 = prev70 - -38;
        *ptr = *ptr + 2;
        yo[i] = acc75;
    }
}
int main() { test_func(); return 0; }

