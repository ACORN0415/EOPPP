// RTPG_3414: vars=9 stmts=5
int xn[32];
int yo[32];
void test_func(void) {
    int val15 = 8057;
    int sum66 = -12;
    int dat31 = -50;
    int dat64 = 20;
    int v74 = 9;
    int a50 = 47779;
    int x27 = 8392;
    int tmp56 = 13;
    int prev81 = 20;
    int h0 = 27510;
    int sv0 = 0;
    int h1 = 37;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        prev81 = xn[i];
        dat31 = sum66;
        val15 = a50 + val15;
        tmp56 = x27;
        val15 = val15 - 10;
        sum66 = a50 + 26191;
        if (dat64 > 86) goto done;
        yo[i] = dat31;
    }
done:
    tmp56 = 0;
}
int main() { test_func(); return 0; }

