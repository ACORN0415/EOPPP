// RTPG_4601: vars=3 stmts=12
int xn[64];
int yo[64];
void test_func(void) {
    int b80 = 62;
    int b72 = 25685;
    int z66 = 74;
    int i;
    for (i = 0; i < 64; i++) {
        b80 = xn[i];
        b72 = z66 - b72;
        b80 = z66 + b80;
        z66 = z66 + 65;
        b80 = b72 - 9;
        z66 = b80 - 0;
        b72 = z66 - b72;
        b72 = b72 + z66;
        b80 = z66;
        z66 = b72 - z66;
        b80 = z66;
        b80 = b72;
        b80 = b80 + 4;
        if (b80 < 18) {
        b72 = z66 - 27;
        }
        yo[i] = b72;
    }
}
int main() { test_func(); return 0; }

