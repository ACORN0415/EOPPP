// RTPG_2081: vars=6 stmts=8
int xn[64];
int yo[64];
void test_func(void) {
    double v23 = 28.41;
    int out85 = 8;
    int dat39 = 1;
    double dat89 = 21.87;
    int acc77 = 55;
    float cur3 = 6.71;
    int i;
    for (i = 0; i < 64; i++) {
        acc77 = xn[i];
        acc77 = dat89 + acc77;
        v23 = v23 + v23;
        v23 = acc77 + 21895;
        out85 = acc77;
        acc77 = dat39 + dat39;
        acc77 = cur3 + 50491;
        dat39 = dat39 - 3;
        v23 = out85 - dat89;
        yo[i] = v23;
    }
}
int main() { test_func(); return 0; }

