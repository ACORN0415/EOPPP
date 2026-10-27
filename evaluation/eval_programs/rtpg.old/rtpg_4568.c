// RTPG_4568: vars=4 stmts=2
int xn[16];
int yo[16];
void test_func(void) {
    int v49 = -33;
    int prev68 = 6;
    int z38 = 33457;
    int b6 = 27;
    int *ptr = &prev68;
    int i;
    for (i = 0; i < 16; i++) {
        z38 = xn[i];
        b6 = prev68 - 27133;
        b6 = v49 & v49;
        *ptr = *ptr + 2;
        yo[i] = prev68;
    }
}
int main() { test_func(); return 0; }

