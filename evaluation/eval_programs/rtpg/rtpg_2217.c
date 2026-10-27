// RTPG_2217: vars=8 stmts=9
int xn[32];
int yo[32];
void test_func(void) {
    int v15 = -31;
    int x56 = 1;
    int c51 = 23;
    int out55 = 0;
    int prev43 = 3;
    int cur69 = 49;
    int hi94 = -3;
    int z23 = 52;
    int i;
    for (i = 0; i < 32; i++) {
        out55 = xn[i];
        prev43 = out55 + x56;
        z23 = c51 + x56;
        cur69 = x56;
        c51 = v15 + prev43;
        x56 = x56 + z23;
        out55 = out55 + 4;
        x56 = x56 + 3;
        z23 = prev43 - c51;
        out55 = out55 + 5;
        yo[i] = v15;
    }
}
int main() { test_func(); return 0; }

