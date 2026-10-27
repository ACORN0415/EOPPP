// RTPG_130: vars=4 stmts=2
int xn[64];
int yo[64];
void test_func(void) {
    int out36 = -19;
    int val64 = 23;
    int acc49 = 1;
    int prev97 = 17;
    int *ptr = &acc49;
    int i;
    for (i = 0; i < 64; i++) {
        prev97 = xn[i];
        out36 = prev97 + prev97;
        acc49 = val64 + acc49;
        *ptr = *ptr + 1;
        yo[i] = acc49;
    }
}
int main() { test_func(); return 0; }

