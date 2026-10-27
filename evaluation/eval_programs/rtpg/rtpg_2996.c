// RTPG_2996: vars=5 stmts=2
int xn[32];
int yo[32];
void test_func(void) {
    int sum66 = 68;
    int hi25 = 3;
    int sum37 = 15017;
    int a1 = 21;
    int y86 = 9;
    int h0 = 8;
    int sv0 = 0;
    int h1 = 28701;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        sum37 = xn[i];
        sum66 = sum37 - a1;
        hi25 = hi25 - sum37;
        yo[i] = sum37;
    }
}
int main() { test_func(); return 0; }

