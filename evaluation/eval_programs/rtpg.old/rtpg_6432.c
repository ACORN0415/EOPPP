// RTPG_6432: vars=5 stmts=4
int xn[16];
int yo[16];
void test_func(void) {
    int tmp24 = 0;
    int a61 = 7;
    int val27 = 87;
    int y20 = 6;
    int z8 = 49;
    int h0 = 29;
    int sv0 = 0;
    int h1 = 38507;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        val27 = xn[i];
        z8 = a61 - 3;
        z8 = z8 - y20;
        val27 = a61 - z8;
        val27 = z8 - tmp24;
        yo[i] = tmp24;
    }
}
int main() { test_func(); return 0; }

