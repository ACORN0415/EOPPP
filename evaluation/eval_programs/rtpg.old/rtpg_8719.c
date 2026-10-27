// RTPG_8719: vars=10 stmts=6
void test_func(void) {
    int cur0 = -11;
    int v75 = -44;
    int acc79 = 0;
    int dat42 = 25657;
    int out78 = 24;
    int z30 = 12;
    int sum26 = 63963;
    int z44 = 32;
    int sum6 = 18454;
    int cnt72 = 23070;
    int i;
    for (i = 0; i < 61; i++) {
        cur0 = cur0 ^ sum26;
        sum26 = cur0 + 3;
        cnt72 = cnt72 - 2;
        cnt72 = sum6 % v75;
        out78 = sum6 + cnt72;
        v75 = cur0 + v75;
        if (v75 < 91) {
        acc79 = dat42 + 29;
        }
    }
}
int main() { test_func(); return 0; }

