// RTPG_8387: vars=5 stmts=8
int xn[16];
int yo[16];
void test_func(void) {
    int hi19 = 48;
    int x20 = 0;
    int c89 = 25;
    int z66 = 26690;
    int dat78 = 24969;
    int *ptr = &x20;
    int h0 = 1;
    int sv0 = 0;
    int h1 = 1;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        x20 = xn[i];
        z66 = c89 + 1;
        dat78 = c89 - x20;
        hi19 = c89 + z66;
        z66 = dat78 + hi19;
        hi19 = c89 * -23;
        hi19 = z66 + 18770;
        x20 = hi19 * -25;
        z66 = hi19 * 4;
        *ptr = *ptr + 4;
        if (dat78 == 26) {
        dat78 = dat78 - 4;
        }
        yo[i] = z66;
    }
}
int main() { test_func(); return 0; }

