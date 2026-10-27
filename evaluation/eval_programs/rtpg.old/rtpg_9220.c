// RTPG_9220: vars=7 stmts=8
int xn[32];
int yo[32];
enum State { OFF, FAST, RED };
void test_func(void) {
    int prev70 = 15;
    int sum40 = 21659;
    int cur9 = 64;
    int prev1 = 44535;
    int y37 = 54;
    int x31 = 54233;
    int sum19 = 13;
    enum State st = OFF;
    int i;
    for (i = 0; i < 32; i++) {
        sum40 = xn[i];
        x31 = sum40 - x31;
        x31 = cur9 ^ sum40;
        cur9 = sum40 ^ x31;
        cur9 = cur9 - 3;
        prev1 = x31 % prev70;
        prev70 = sum40 + 33;
        prev70 = prev1 & sum19;
        prev70 = y37 - sum19;
        yo[i] = y37;
    }
}
int main() { test_func(); return 0; }

