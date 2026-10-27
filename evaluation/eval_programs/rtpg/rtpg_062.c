// RTPG_62: vars=5 stmts=8
int xn[32];
int yo[32];
void test_func(void) {
    int dat16 = 2589;
    int hi82 = 8;
    int a41 = 24;
    int cnt38 = 10;
    int z91 = 8;
    int h0 = 9;
    int sv0 = 0;
    int h1 = 8;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        dat16 = xn[i];
        a41 = a41 + 4;
        dat16 = a41 + 50;
        a41 = a41 - 5;
        hi82 = dat16 + dat16;
        a41 = hi82 * 71;
        z91 = cnt38 * 34168;
        hi82 = cnt38 - dat16;
        hi82 = hi82 + 1;
        if (a41 != -1) {
        a41 = a41 + 4;
        }
        yo[i] = hi82;
    }
}
int main() { test_func(); return 0; }

