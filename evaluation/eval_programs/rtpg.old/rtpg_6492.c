// RTPG_6492: vars=7 stmts=7
int idx_arr[32];
void test_func(void) {
    float tmp60 = 51.28;
    int out89 = 4;
    int v28 = 24;
    int z61 = 32397;
    int x45 = 26826;
    int c58 = 22;
    int tmp53 = 1;
    int i;
    for (i = 0; i < 48; i++) {
        c58 = xn[idx_arr[i]];
        tmp53 = tmp60 - 29;
        tmp60 = v28 - tmp60;
        out89 = tmp53 + 6;
        out89 = out89 + v28;
        tmp60 = x45 + out89;
        out89 = out89 + 5;
        c58 = tmp53 - z61;
        if (out89 != 1) {
        v28 = v28 - 3;
        }
    }
}
int main() { test_func(); return 0; }

