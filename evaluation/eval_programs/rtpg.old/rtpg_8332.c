// RTPG_8332: vars=6 stmts=3
int xn[16];
int yo[16];
void test_func(void) {
    int dat80 = 44808;
    int dat88 = 49890;
    int dat99 = 65;
    int out59 = 18;
    int res26 = -42;
    int tmp80 = 66;
    int *ptr = &res26;
    int h0 = 12218;
    int sv0 = 0;
    int h1 = 13886;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        res26 = xn[i];
        res26 = tmp80 + out59;
        res26 = dat99 + res26;
        tmp80 = dat99;
        *ptr = *ptr + 1;
        yo[i] = res26;
    }
}
int main() { test_func(); return 0; }

