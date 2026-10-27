// RTPG_5214: vars=4 stmts=12
int xn[32];
int yo[32];
void test_func(void) {
    int c18 = 4;
    int v1 = 9813;
    int b86 = 18;
    int c98 = 15;
    int i;
    for (i = 0; i < 32; i++) {
        v1 = xn[i];
        c18 = v1 - 5;
        c98 = v1 + 31638;
        b86 = c18 + -21;
        c18 = c18 - 30853;
        c18 = v1 - 17962;
        b86 = c18;
        c18 = c98 + v1;
        c18 = v1 - b86;
        b86 = b86 - c98;
        b86 = c18 - 7;
        b86 = v1 - c98;
        c18 = c18;
        yo[i] = c18;
    }
}
int main() { test_func(); return 0; }

