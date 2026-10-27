// RTPG_1137: vars=4 stmts=4
int xn[16];
int yo[16];
void test_func(void) {
    int cur62 = 51;
    int acc80 = 2;
    int sum14 = 8;
    int b3 = 8;
    int i;
    for (i = 0; i < 16; i++) {
        cur62 = xn[i];
        b3 = acc80;
        b3 = b3 - 3;
        sum14 = acc80 + 7;
        b3 = b3 ^ sum14;
        if (acc80 >= -40) {
        sum14 = sum14;
        }
        yo[i] = acc80;
    }
}
int main() { test_func(); return 0; }

