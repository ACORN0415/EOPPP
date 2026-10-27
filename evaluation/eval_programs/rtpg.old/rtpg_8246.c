// RTPG_8246: vars=8 stmts=4
int xn[16];
int yo[16];
void test_func(void) {
    int v64 = 44778;
    int dat76 = 3280;
    int c20 = 46;
    int tmp86 = 41822;
    int hi69 = 0;
    int res56 = 17;
    int dat66 = 29;
    int out86 = -49;
    int i;
    for (i = 0; i < 16; i++) {
        res56 = xn[i];
        dat66 = res56 - dat66;
        c20 = res56 - dat76;
        dat76 = dat66 - dat76;
        out86 = out86 + 1;
        if (tmp86 < 49) {
        hi69 = dat66;
        }
        yo[i] = v64;
    }
}
int main() { test_func(); return 0; }

