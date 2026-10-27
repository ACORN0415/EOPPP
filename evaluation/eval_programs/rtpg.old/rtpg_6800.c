// RTPG_6800: vars=7 stmts=4
int xn[16];
int yo[16];
void test_func(void) {
    int hi87 = -42;
    int res16 = 37;
    int hi77 = 54;
    int tmp15 = 31970;
    int x38 = 8;
    int acc42 = 35608;
    int x51 = 9;
    int h0 = 31;
    int sv0 = 0;
    int h1 = 39;
    int sv1 = 0;
    int h2 = 61385;
    int sv2 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        hi87 = xn[i];
        x38 = hi87 * 89;
        x51 = acc42;
        hi77 = hi77 + 1;
        x51 = x51 + 4;
        if (res16 < 93) {
        x51 = x38 - hi87;
        }
        yo[i] = x51;
    }
}
int main() { test_func(); return 0; }

