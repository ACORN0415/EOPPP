// RTPG_64: vars=9 stmts=7
int xn[32];
int yo[32];
void test_func(void) {
    int acc99 = 12839;
    int out52 = -2;
    int tmp9 = 8;
    int prev3 = 90;
    int val15 = 7;
    int out14 = 52777;
    int val18 = -34;
    int z42 = 19;
    int z46 = 42;
    int h0 = 3;
    int sv0 = 0;
    int h1 = 60;
    int sv1 = 0;
    int h2 = 92;
    int sv2 = 0;
    int h3 = 40;
    int sv3 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        out52 = xn[i];
        prev3 = out52 * 8;
        acc99 = z46 - tmp9;
        z46 = val18 + prev3;
        val18 = val18 - 2;
        z46 = z46 + 5;
        z46 = prev3 * 47;
        val18 = out14 + 32;
        yo[i] = val15;
    }
}
int main() { test_func(); return 0; }

