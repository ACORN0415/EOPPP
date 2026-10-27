// RTPG_3227: vars=5 stmts=8
int xn[32];
int yo[32];
void test_func(void) {
    int y41 = 12;
    double cnt84 = 74.21;
    int cur98 = 15;
    int z60 = -1;
    int cnt79 = 7;
    int i;
    for (i = 0; i < 32; i++) {
        cnt79 = xn[i];
        cur98 = cnt84 ^ cur98;
        cnt79 = z60 | cnt84;
        y41 = y41 - 1;
        cur98 = z60 - y41;
        y41 = cnt84 - z60;
        y41 = cur98 - cnt84;
        cnt84 = z60 / cur98;
        z60 = z60 - 1;
        if (cnt84 <= 90) {
        cur98 = cur98 - 4;
        }
        yo[i] = cur98;
    }
}
int main() { test_func(); return 0; }

