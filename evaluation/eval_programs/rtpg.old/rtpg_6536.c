// RTPG_6536: vars=10 stmts=8
int xn[32];
int yo[32];
void test_func(void) {
    int c11 = 5;
    int cnt62 = 52767;
    int prev0 = 10;
    int b17 = 8;
    int res62 = 61061;
    int z59 = 22505;
    int x6 = 31593;
    int tmp41 = 85;
    int out86 = 36;
    int b34 = 36705;
    int i;
    for (i = 0; i < 32; i++) {
        prev0 = xn[i];
        z59 = z59 - 3;
        b34 = b17;
        b17 = res62 - b17;
        b34 = b34 + 4;
        tmp41 = x6 + b17;
        b17 = tmp41 + prev0;
        res62 = cnt62;
        prev0 = out86 + res62;
        yo[i] = out86;
    }
}
int main() { test_func(); return 0; }

