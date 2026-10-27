// RTPG_9711: vars=5 stmts=8
int xn[16];
int yo[16];
void test_func(void) {
    int hi32 = 30;
    int cnt86 = 4;
    int y93 = 2;
    int b22 = 37;
    int z81 = -34;
    int i;
    for (i = 0; i < 16; i++) {
        y93 = xn[i];
        b22 = hi32 + b22;
        b22 = cnt86 - 36;
        b22 = y93 | z81;
        cnt86 = b22 | y93;
        cnt86 = y93;
        cnt86 = cnt86 - hi32;
        z81 = z81;
        z81 = cnt86 ^ hi32;
        yo[i] = cnt86;
    }
}
int main() { test_func(); return 0; }

