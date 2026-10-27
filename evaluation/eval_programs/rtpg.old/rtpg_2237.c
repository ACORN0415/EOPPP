// RTPG_2237: vars=5 stmts=3
int xn[64];
int yo[64];
void test_func(void) {
    int x82 = 14;
    int a73 = 40031;
    int z76 = 8;
    int out98 = 55192;
    int out27 = 6;
    int i;
    for (i = 0; i < 64; i++) {
        out98 = xn[i];
        x82 = z76 - 8;
        x82 = a73;
        z76 = z76 + out98;
        yo[i] = z76;
    }
}
int main() { test_func(); return 0; }

