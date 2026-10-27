// RTPG_4711: vars=5 stmts=2
int xn[64];
int yo[64];
void test_func(void) {
    int b21 = 40934;
    int c27 = 35;
    int prev48 = 25433;
    int z72 = 8;
    int dat79 = -21;
    int *ptr = &dat79;
    int h0 = 47;
    int sv0 = 0;
    int h1 = 76;
    int sv1 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        b21 = xn[i];
        dat79 = z72 - c27;
        prev48 = z72 + c27;
        *ptr = *ptr + 4;
        yo[i] = c27;
    }
}
int main() { test_func(); return 0; }

