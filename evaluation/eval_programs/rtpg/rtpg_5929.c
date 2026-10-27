// RTPG_5929: vars=7 stmts=4
int xn[16];
int yo[16];
void test_func(void) {
    int dat31 = 3;
    int dat91 = 0;
    int tmp80 = 43322;
    int dat93 = -22;
    int c48 = 2;
    int v95 = 89;
    int prev97 = 3;
    int i;
    for (i = 0; i < 16; i++) {
        tmp80 = xn[i];
        dat91 = prev97 - -1;
        dat31 = prev97 - tmp80;
        dat31 = dat31 + 3;
        dat91 = v95;
        yo[i] = dat93;
    }
}
int main() { test_func(); return 0; }

