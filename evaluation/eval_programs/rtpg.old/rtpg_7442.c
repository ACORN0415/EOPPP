// RTPG_7442: vars=4 stmts=4
int xn[32];
int yo[32];
void test_func(void) {
    int val7 = 44;
    int hi32 = 48;
    int res93 = 3;
    int z60 = 39270;
    int h0 = 8;
    int sv0 = 0;
    int h1 = 0;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        hi32 = xn[i];
        hi32 = z60 - val7;
        res93 = val7;
        z60 = val7 + 12;
        hi32 = val7 + z60;
        yo[i] = res93;
    }
}
int main() { test_func(); return 0; }

