// RTPG_5165: vars=6 stmts=4
int xn[16];
int yo[16];
void test_func(void) {
    int z0 = 47434;
    int v13 = 37;
    int cur33 = 24;
    int y72 = 8;
    int b59 = 24617;
    int lo10 = 48;
    int i;
    for (i = 0; i < 16; i++) {
        y72 = xn[i];
        v13 = z0 + b59;
        b59 = z0 - lo10;
        z0 = b59 - z0;
        v13 = v13 + 5;
        if (y72 > -12) {
        z0 = z0 - 1;
        }
        yo[i] = lo10;
    }
}
int main() { test_func(); return 0; }

