// RTPG_7334: vars=5 stmts=6
int xn[64];
int yo[64];
void test_func(void) {
    int dat37 = 44;
    int hi20 = 64059;
    int out21 = 45513;
    int cnt58 = 2;
    int res19 = 16520;
    int i;
    for (i = 0; i < 64; i++) {
        out21 = xn[i];
        hi20 = hi20 + out21;
        out21 = out21 - 3;
        res19 = out21;
        out21 = cnt58 + out21;
        out21 = hi20 ^ dat37;
        res19 = cnt58 - 4;
        yo[i] = hi20;
    }
}
int main() { test_func(); return 0; }

