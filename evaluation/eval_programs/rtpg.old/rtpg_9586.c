// RTPG_9586: vars=6 stmts=5
int xn[64];
int yo[64];
void test_func(void) {
    int cur37 = 43;
    int cur36 = 1;
    int dat51 = 29;
    int b82 = 59448;
    int c16 = 75;
    float z80 = 28.37;
    int i;
    for (i = 0; i < 64; i++) {
        cur37 = xn[i];
        c16 = cur36 - 93;
        z80 = c16 - 35321;
        z80 = cur37 - dat51;
        cur36 = cur36 - 1;
        c16 = dat51 - cur36;
        yo[i] = z80;
    }
}
int main() { test_func(); return 0; }

