// RTPG_4619: vars=4 stmts=2
int xn[16];
int yo[16];
void test_func(void) {
    int b6 = -33;
    int v49 = 6;
    int prev68 = 33457;
    int z38 = 27;
    int *ptr = &v49;
    int i;
    for (i = 0; i < 16; i++) {
        prev68 = xn[i];
        z38 = v49 - 27133;
        z38 = b6 / z38;
        *ptr = *ptr + 2;
        yo[i] = v49;
    }
}
int main() { test_func(); return 0; }

