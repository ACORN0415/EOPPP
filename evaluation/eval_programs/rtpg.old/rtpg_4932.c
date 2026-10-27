// RTPG_4932: vars=5 stmts=9
int xn[64];
int yo[64];
void test_func(void) {
    int res32 = 7;
    int res77 = 34;
    int c41 = 7;
    int prev59 = 38012;
    int dat40 = 81;
    int i;
    for (i = 0; i < 64; i++) {
        dat40 = xn[i];
        res32 = dat40 + res32;
        c41 = c41 - 2;
        prev59 = prev59 + 4;
        dat40 = dat40;
        prev59 = prev59 - res77;
        dat40 = c41 + res32;
        prev59 = prev59 - dat40;
        c41 = res32 - prev59;
        c41 = dat40 + c41;
        if (prev59 != 94) {
        res77 = res77 + dat40;
        }
        yo[i] = res32;
    }
}
int main() { test_func(); return 0; }

