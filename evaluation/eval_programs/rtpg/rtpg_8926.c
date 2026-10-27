// RTPG_8926: vars=5 stmts=3
int xn[32];
int yo[32];
void test_func(void) {
    int acc95 = -40;
    int x76 = 7;
    int prev32 = 64;
    int hi18 = 39;
    int v38 = 31886;
    int i;
    for (i = 0; i < 32; i++) {
        acc95 = xn[i];
        v38 = hi18 - x76;
        x76 = v38 - v38;
        x76 = v38 / hi18;
        if (v38 > 76) {
        hi18 = hi18 + 3;
        }
        yo[i] = hi18;
    }
}
int main() { test_func(); return 0; }

