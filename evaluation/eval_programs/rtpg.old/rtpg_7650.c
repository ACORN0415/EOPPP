// RTPG_7650: vars=10 stmts=3
int xn[32];
int yo[32];
enum State { BLUE, GREEN, RED };
void test_func(void) {
    int sum14 = 9;
    int res0 = -7;
    int v37 = 5;
    int b78 = 10;
    int prev11 = -44;
    int dat81 = 7807;
    int y27 = 37;
    int cur33 = 35;
    int sum50 = 9;
    int a7 = 16860;
    enum State st = BLUE;
    int *ptr = &prev11;
    int i;
    for (i = 0; i < 32; i++) {
        y27 = xn[i];
        y27 = cur33 - 11;
        y27 = sum14 + v37;
        cur33 = cur33 - v37;
        *ptr = *ptr + 2;
        yo[i] = sum50;
    }
}
int main() { test_func(); return 0; }

