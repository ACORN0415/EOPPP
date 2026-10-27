// RTPG_2519: vars=6 stmts=10
int xn[64];
int yo[64];
void test_func(void) {
    int out43 = 7;
    int acc37 = -18;
    int dat40 = 6040;
    int prev6 = 44;
    int prev37 = 9;
    int tmp25 = 19261;
    int i;
    for (i = 0; i < 64; i++) {
        prev6 = xn[i];
        dat40 = prev37;
        prev6 = dat40;
        dat40 = out43 - acc37;
        acc37 = prev6 - prev37;
        prev37 = acc37;
        acc37 = out43 + tmp25;
        prev37 = tmp25 - prev6;
        prev37 = acc37 - dat40;
        prev37 = prev37 + 3;
        dat40 = dat40 + out43;
        yo[i] = prev37;
    }
}
int main() { test_func(); return 0; }

