// RTPG_429: vars=3 stmts=7
int xn[32];
int yo[32];
void test_func(void) {
    float out86 = 80.46;
    int b29 = 39;
    float cur10 = 94.00;
    int h0 = 24499;
    int sv0 = 0;
    int h1 = 29;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        out86 = xn[i];
        out86 = cur10;
        out86 = b29;
        out86 = out86 - 3;
        cur10 = cur10 + 4;
        b29 = out86;
        b29 = out86 * -17;
        out86 = out86 + cur10;
        if (out86 == -27) {
        out86 = cur10 - out86;
        }
        yo[i] = b29;
    }
}
int main() { test_func(); return 0; }

