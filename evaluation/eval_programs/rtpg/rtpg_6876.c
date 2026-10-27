// RTPG_6876: vars=7 stmts=4
int xn[16];
int yo[16];
void test_func(void) {
    int tmp15 = -42;
    int hi87 = 37;
    int acc42 = 54;
    int hi77 = 31970;
    int x51 = 8;
    int res16 = 35608;
    int x38 = 9;
    int h0 = 31;
    int sv0 = 0;
    int h1 = 39;
    int sv1 = 0;
    int h2 = 61385;
    int sv2 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        tmp15 = xn[i];
        x51 = tmp15 * 89;
        x38 = res16;
        acc42 = acc42 + 1;
        x38 = x38 + 4;
        if (hi87 < 93) {
        x38 = x51 - tmp15;
        }
        yo[i] = x38;
    }
}
int main() { test_func(); return 0; }

