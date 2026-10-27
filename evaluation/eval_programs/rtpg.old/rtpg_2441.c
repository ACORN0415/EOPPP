// RTPG_2441: vars=7 stmts=5
int xn[16];
int yo[16];
void test_func(void) {
    int c57 = 18085;
    int hi13 = 3;
    int cur82 = 9;
    int prev13 = -11;
    int v42 = 8;
    int c32 = 33770;
    int dat16 = 67;
    int h0 = 30;
    int sv0 = 0;
    int h1 = 19;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        v42 = xn[i];
        hi13 = v42 - hi13;
        v42 = c57 + hi13;
        v42 = prev13;
        dat16 = dat16 * 689;
        dat16 = prev13 * 50;
        yo[i] = c32;
    }
}
int main() { test_func(); return 0; }

