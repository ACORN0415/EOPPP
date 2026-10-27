// RTPG_8278: vars=5 stmts=8
int xn[16];
int yo[16];
void test_func(void) {
    int x20 = 48;
    int dat78 = 0;
    int c89 = 25;
    int z66 = 26690;
    int hi19 = 24969;
    int *ptr = &dat78;
    int h0 = 1;
    int sv0 = 0;
    int h1 = 1;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        dat78 = xn[i];
        z66 = c89 + 1;
        hi19 = c89 - dat78;
        x20 = c89 + z66;
        z66 = hi19 + x20;
        x20 = c89 * -23;
        x20 = z66 + 18770;
        dat78 = x20 * -25;
        z66 = x20 * 4;
        *ptr = *ptr + 4;
        if (hi19 == 26) {
        hi19 = hi19 - 4;
        }
        yo[i] = z66;
    }
}
int main() { test_func(); return 0; }

