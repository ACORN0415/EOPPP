// RTPG_3168: vars=3 stmts=7
void test_func(void) {
    int b56 = 48370;
    int y93 = -14;
    int x12 = -9;
    int h0 = 1;
    int sv0 = 0;
    int h1 = 44;
    int sv1 = 0;
    int i;
    for (i = 0; i < 43; i++) {
        b56 = b56 * -28;
        x12 = x12 + b56;
        b56 = y93 % x12;
        x12 = b56 * 46;
        y93 = y93 ^ y93;
        y93 = y93 - y93;
        y93 = y93 + 5;
        if (x12 < 32) {
        y93 = y93;
        }
    }
}
int main() { test_func(); return 0; }

