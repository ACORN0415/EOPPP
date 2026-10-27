// RTPG_7478: vars=6 stmts=9
int xn[64];
int yo[64];
void test_func(void) {
    int b13 = 41379;
    int tmp11 = 10;
    int lo67 = 4457;
    int out56 = 96;
    int out85 = 7;
    int b50 = 48;
    int h0 = 64438;
    int sv0 = 0;
    int h1 = 46;
    int sv1 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        b13 = xn[i];
        b13 = out56 * 43;
        out85 = tmp11 + out56;
        tmp11 = b50 - b13;
        out85 = lo67;
        tmp11 = b13 * 32654;
        lo67 = b50 - -40;
        tmp11 = out56 - b13;
        b13 = b50 - out56;
        b50 = b50 - 4;
        yo[i] = out85;
    }
}
int main() { test_func(); return 0; }

