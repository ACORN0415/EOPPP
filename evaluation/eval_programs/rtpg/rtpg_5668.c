// RTPG_5668: vars=8 stmts=3
int xn[16];
int yo[16];
void test_func(void) {
    int acc89 = -25;
    int v16 = 17;
    int sum21 = 3;
    int sum35 = 12;
    int cur14 = 69;
    int tmp27 = 32;
    int tmp93 = 9828;
    int cnt42 = 48;
    int i;
    for (i = 0; i < 16; i++) {
        cnt42 = xn[i];
        tmp93 = tmp93 + cur14;
        acc89 = cur14 + v16;
        cnt42 = acc89 - tmp93;
        if (v16 > 85) {
        sum21 = tmp93;
        }
        yo[i] = cur14;
    }
}
int main() { test_func(); return 0; }

