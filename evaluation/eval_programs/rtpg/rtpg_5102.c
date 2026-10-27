// RTPG_5102: vars=5 stmts=3
int xn[16];
int yo[16];
void test_func(void) {
    int a51 = 5;
    int tmp90 = 46;
    int v73 = 34;
    int z28 = 17;
    int z1 = 39;
    int h0 = 26;
    int sv0 = 0;
    int h1 = 9265;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        z1 = xn[i];
        a51 = v73 ^ z28;
        a51 = z1 * 81;
        a51 = a51 + 3;
        if (a51 == -6) {
        tmp90 = tmp90 + 4;
        }
        yo[i] = z1;
    }
}
int main() { test_func(); return 0; }

