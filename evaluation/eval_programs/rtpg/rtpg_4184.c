// RTPG_4184: vars=4 stmts=4
void test_func(void) {
    int b88 = 8;
    int res73 = 2;
    int dat72 = -9;
    int cnt17 = 25;
    int i;
    for (i = 0; i < 99; i++) {
        dat72 = cnt17 + cnt17;
        cnt17 = res73 - cnt17;
        cnt17 = cnt17 + 4;
        dat72 = b88;
    }
}
int main() { test_func(); return 0; }

