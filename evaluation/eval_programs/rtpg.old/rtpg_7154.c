// RTPG_7154: vars=5 stmts=8
int xn[64];
int yo[64];
void test_func(void) {
    int cnt88 = -9;
    int prev40 = 5;
    int res7 = 63002;
    float v63 = 20.65;
    int z65 = 1;
    int i;
    for (i = 0; i < 64; i++) {
        res7 = xn[i];
        res7 = cnt88 - z65;
        prev40 = res7;
        v63 = z65 - 82;
        z65 = v63 + v63;
        cnt88 = z65 - v63;
        res7 = v63 - prev40;
        cnt88 = prev40 + prev40;
        prev40 = v63 + 24;
        if (prev40 <= 82) {
        v63 = prev40 + cnt88;
        }
        yo[i] = res7;
    }
}
int main() { test_func(); return 0; }

