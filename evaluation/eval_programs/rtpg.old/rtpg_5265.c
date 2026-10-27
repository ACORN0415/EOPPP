// RTPG_5265: vars=4 stmts=4
int xn[32];
int yo[32];
void test_func(void) {
    int a96 = 20954;
    int z65 = -18;
    float tmp99 = 60.63;
    int b98 = 53060;
    int h0 = 5773;
    int sv0 = 0;
    int h1 = 8;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        a96 = xn[i];
        a96 = a96 & tmp99;
        b98 = b98 | tmp99;
        tmp99 = b98 & b98;
        b98 = tmp99 & a96;
        yo[i] = z65;
    }
}
int main() { test_func(); return 0; }

