// RTPG_4661: vars=3 stmts=3
int xn[32];
int yo[32];
void test_func(void) {
    int c15 = -12;
    int sum72 = 46;
    int y41 = 34562;
    int h0 = 9;
    int sv0 = 0;
    int h1 = 17305;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        sum72 = xn[i];
        y41 = sum72 * 34;
        y41 = c15 * 37;
        y41 = c15 * 38;
        if (y41 <= 11) {
        y41 = y41 - 97;
        }
        yo[i] = y41;
    }
}
int main() { test_func(); return 0; }

