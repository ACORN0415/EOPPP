// RTPG_3836: vars=9 stmts=5
int xn[16];
int yo[16];
void test_func(void) {
    int y23 = 4;
    int sum10 = 45235;
    int hi30 = 42605;
    int b32 = 40;
    int y6 = 43510;
    int x80 = 26727;
    int res81 = 29;
    int tmp80 = 1;
    int a36 = -44;
    int i;
    for (i = 0; i < 16; i++) {
        b32 = xn[i];
        b32 = hi30 + a36;
        b32 = a36;
        sum10 = b32 + y6;
        sum10 = hi30;
        sum10 = x80 + b32;
        yo[i] = tmp80;
    }
}
int main() { test_func(); return 0; }

