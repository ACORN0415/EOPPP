// RTPG_1906: vars=4 stmts=3
void test_func(void) {
    int y47 = 2;
    int val89 = 7801;
    int a10 = 14;
    int cnt69 = 1;
    int i;
    for (i = 0; i < 64; i++) {
        cnt69 = y47 ^ a10;
        y47 = cnt69 & y47;
        a10 = a10 % cnt69;
    }
}
int main() { test_func(); return 0; }

