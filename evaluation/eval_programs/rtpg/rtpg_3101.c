// RTPG_3101: vars=10 stmts=4
int xn[64];
int yo[64];
void test_func(void) {
    int cur44 = 76;
    int hi87 = -20;
    int out4 = 4;
    int cur94 = -36;
    int z55 = 3;
    int acc32 = 53806;
    int prev63 = 24810;
    int x54 = 38;
    int acc1 = 7;
    int sum77 = 30;
    int i;
    for (i = 0; i < 64; i++) {
        z55 = xn[i];
        hi87 = z55 + x54;
        hi87 = cur94 | acc1;
        acc32 = acc1 ^ hi87;
        out4 = hi87 - sum77;
        yo[i] = acc32;
    }
}
int main() { test_func(); return 0; }

