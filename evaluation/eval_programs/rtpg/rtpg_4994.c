// RTPG_4994: vars=5 stmts=9
int xn[64];
int yo[64];
void test_func(void) {
    int prev59 = 7;
    int dat40 = 34;
    int c41 = 7;
    int res77 = 38012;
    int res32 = 81;
    int i;
    for (i = 0; i < 64; i++) {
        res32 = xn[i];
        prev59 = res32 + prev59;
        c41 = c41 - 2;
        res77 = res77 + 4;
        res32 = res32;
        res77 = res77 - dat40;
        res32 = c41 + prev59;
        res77 = res77 - res32;
        c41 = prev59 - res77;
        c41 = res32 + c41;
        if (res77 != 94) {
        dat40 = dat40 + res32;
        }
        yo[i] = prev59;
    }
}
int main() { test_func(); return 0; }

