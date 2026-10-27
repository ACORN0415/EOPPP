// RTPG_8355: vars=8 stmts=4
int xn[16];
int yo[16];
void test_func(void) {
    int tmp86 = 44778;
    int dat76 = 3280;
    int res56 = 46;
    int hi69 = 41822;
    int dat66 = 0;
    int v64 = 17;
    int out86 = 29;
    int c20 = -49;
    int i;
    for (i = 0; i < 16; i++) {
        v64 = xn[i];
        out86 = v64 - out86;
        res56 = v64 - dat76;
        dat76 = out86 - dat76;
        c20 = c20 + 1;
        if (hi69 < 49) {
        dat66 = out86;
        }
        yo[i] = tmp86;
    }
}
int main() { test_func(); return 0; }

