// RTPG_3315: vars=7 stmts=11
int xn[16];
int yo[16];
void test_func(void) {
    int x30 = -7;
    int cur54 = 55891;
    int acc55 = 27;
    int acc96 = 59;
    int acc39 = 3;
    int b11 = 7;
    int acc73 = 1;
    int i;
    for (i = 0; i < 16; i++) {
        acc39 = xn[i];
        acc55 = acc55 + 51;
        acc39 = acc55;
        acc73 = acc73;
        acc39 = acc55 + acc39;
        cur54 = x30;
        b11 = b11 - 1;
        acc39 = acc55 + 25;
        acc96 = acc96 - 4;
        cur54 = cur54 + 4;
        acc39 = acc55;
        acc55 = acc39 - 5;
        yo[i] = acc96;
    }
}
int main() { test_func(); return 0; }

