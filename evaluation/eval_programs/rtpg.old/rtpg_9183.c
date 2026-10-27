// RTPG_9183: vars=3 stmts=4
int xn[16];
int yo[16];
void test_func(void) {
    int y63 = 30;
    int z66 = 2;
    int tmp9 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        y63 = xn[i];
        z66 = y63 - z66;
        y63 = z66;
        tmp9 = z66 - tmp9;
        tmp9 = y63 + 93;
        yo[i] = y63;
    }
}
int main() { test_func(); return 0; }

