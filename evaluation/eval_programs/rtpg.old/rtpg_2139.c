// RTPG_2139: vars=3 stmts=6
int xn[64];
int yo[64];
void test_func(void) {
    int out98 = 16;
    int a36 = 31;
    int b89 = 43;
    int i;
    for (i = 0; i < 64; i++) {
        out98 = xn[i];
        out98 = a36;
        b89 = out98 - -8;
        out98 = a36;
        a36 = a36 - b89;
        b89 = a36 - b89;
        a36 = a36 + 5;
        if (out98 != 23) {
        b89 = a36 - out98;
        }
        yo[i] = a36;
    }
}
int main() { test_func(); return 0; }

