// RTPG_5002: vars=6 stmts=11
int xn[32];
int yo[32];
void test_func(void) {
    int res1 = 3;
    int z64 = 26;
    int z62 = 35;
    int hi20 = 26;
    int cnt46 = 6;
    int val16 = 1;
    int i;
    for (i = 0; i < 32; i++) {
        val16 = xn[i];
        res1 = cnt46;
        z62 = z64 + z64;
        cnt46 = cnt46 - 4;
        cnt46 = val16 - z62;
        res1 = cnt46 - z62;
        val16 = z64 + val16;
        res1 = val16;
        val16 = val16 - 50360;
        cnt46 = z64 + -3;
        cnt46 = z64;
        res1 = val16 + cnt46;
        yo[i] = res1;
    }
}
int main() { test_func(); return 0; }

