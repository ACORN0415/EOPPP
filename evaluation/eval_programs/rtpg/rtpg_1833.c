// RTPG_1833: vars=3 stmts=11
int xn[32];
int yo[32];
void test_func(void) {
    int x37 = 53842;
    int v59 = 34;
    int prev24 = 55345;
    int h0 = 64;
    int sv0 = 0;
    int h1 = 57;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        v59 = xn[i];
        prev24 = prev24 - 3;
        v59 = x37;
        prev24 = v59 * 6;
        x37 = x37 - 4;
        prev24 = prev24 - 4;
        v59 = prev24 + v59;
        x37 = prev24 % x37;
        x37 = prev24 | x37;
        prev24 = x37 - v59;
        x37 = prev24;
        prev24 = prev24 - 60897;
        if (v59 != -10) {
        v59 = prev24 + x37;
        }
        yo[i] = prev24;
    }
}
int main() { test_func(); return 0; }

