// RTPG_9576: vars=4 stmts=5
int xn[16];
int yo[16];
void test_func(void) {
    int acc75 = 52270;
    int prev70 = 8;
    int cnt40 = 4;
    int a30 = 8625;
    int *ptr = &acc75;
    int i;
    for (i = 0; i < 16; i++) {
        prev70 = xn[i];
        acc75 = cnt40 - prev70;
        acc75 = acc75 + 6;
        cnt40 = cnt40 - 4;
        prev70 = prev70;
        acc75 = prev70 - -38;
        *ptr = *ptr + 2;
        yo[i] = a30;
    }
}
int main() { test_func(); return 0; }

