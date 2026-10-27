// RTPG_4652: vars=3 stmts=12
int xn[64];
int yo[64];
void test_func(void) {
    int z66 = 62;
    int b72 = 25685;
    int b80 = 74;
    int i;
    for (i = 0; i < 64; i++) {
        z66 = xn[i];
        b72 = b80 - b72;
        z66 = b80 + z66;
        b80 = b80 + 65;
        z66 = b72 - 9;
        b80 = z66 - 0;
        b72 = b80 - b72;
        b72 = b72 + b80;
        z66 = b80;
        b80 = b72 - b80;
        z66 = b80;
        z66 = b72;
        z66 = z66 + 4;
        if (z66 < 18) {
        b72 = b80 - 27;
        }
        yo[i] = b72;
    }
}
int main() { test_func(); return 0; }

