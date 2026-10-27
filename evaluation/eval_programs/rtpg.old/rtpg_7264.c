// RTPG_7264: vars=5 stmts=6
int xn[64];
int yo[64];
void test_func(void) {
    int out21 = 44;
    int hi20 = 64059;
    int res19 = 45513;
    int cnt58 = 2;
    int dat37 = 16520;
    int i;
    for (i = 0; i < 64; i++) {
        res19 = xn[i];
        hi20 = hi20 + res19;
        res19 = res19 - 3;
        dat37 = res19;
        res19 = cnt58 + res19;
        res19 = hi20 ^ out21;
        dat37 = cnt58 - 4;
        yo[i] = hi20;
    }
}
int main() { test_func(); return 0; }

