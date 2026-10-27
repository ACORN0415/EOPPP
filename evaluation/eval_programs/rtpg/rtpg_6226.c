// RTPG_6226: vars=9 stmts=5
int xn[16];
int yo[16];
void test_func(void) {
    int acc0 = 9;
    int acc16 = 35378;
    int x52 = 60710;
    int z4 = 20;
    int dat82 = -40;
    int y94 = 78;
    int cur60 = 10;
    int a94 = -7;
    int prev16 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        prev16 = xn[i];
        dat82 = acc0;
        x52 = z4 - y94;
        acc0 = dat82 + y94;
        z4 = z4 - acc0;
        a94 = a94 + 3;
        yo[i] = prev16;
    }
}
int main() { test_func(); return 0; }

