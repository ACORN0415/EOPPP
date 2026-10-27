// RTPG_8791: vars=6 stmts=4
int xn[64];
int yo[64];
void test_func(void) {
    int v10 = 4;
    int sum7 = 7;
    int hi44 = 34;
    int b60 = 8;
    int res8 = -45;
    int dat27 = -37;
    int i;
    for (i = 0; i < 64; i++) {
        dat27 = xn[i];
        hi44 = sum7 + dat27;
        b60 = b60 - 2;
        sum7 = res8 + b60;
        res8 = b60 - v10;
        if (v10 == -16) {
        b60 = b60 + 3;
        }
        yo[i] = dat27;
    }
}
int main() { test_func(); return 0; }

