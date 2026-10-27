// RTPG_5215: vars=4 stmts=5
int xn[16];
int yo[16];
void test_func(void) {
    int z93 = 6;
    int out46 = 2;
    int v32 = 6;
    int hi45 = 5;
    int i;
    for (i = 0; i < 16; i++) {
        v32 = xn[i];
        v32 = v32 + hi45;
        out46 = v32;
        v32 = v32;
        out46 = v32 - out46;
        out46 = v32 - z93;
        if (hi45 > 34) {
        hi45 = hi45 - hi45;
        }
        yo[i] = z93;
    }
}
int main() { test_func(); return 0; }

