// RTPG_4660: vars=5 stmts=2
int xn[64];
int yo[64];
void test_func(void) {
    int c27 = 40934;
    int prev48 = 35;
    int b21 = 25433;
    int z72 = 8;
    int dat79 = -21;
    int *ptr = &dat79;
    int h0 = 47;
    int sv0 = 0;
    int h1 = 76;
    int sv1 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        c27 = xn[i];
        dat79 = z72 - prev48;
        b21 = z72 + prev48;
        *ptr = *ptr + 4;
        yo[i] = prev48;
    }
}
int main() { test_func(); return 0; }

