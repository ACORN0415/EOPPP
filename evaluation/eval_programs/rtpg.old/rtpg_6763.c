// RTPG_6763: vars=5 stmts=2
int xn[64];
int yo[64];
void test_func(void) {
    int a95 = 40;
    int y70 = -2;
    int b9 = 3;
    int z55 = 36701;
    int a96 = 61214;
    int h0 = 5;
    int sv0 = 0;
    int h1 = 85;
    int sv1 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        y70 = xn[i];
        a95 = a96 - a95;
        b9 = b9 - a95;
        yo[i] = a96;
    }
}
int main() { test_func(); return 0; }

