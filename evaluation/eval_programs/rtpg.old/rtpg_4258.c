// RTPG_4258: vars=9 stmts=9
int xn[32];
int yo[32];
void test_func(void) {
    int acc79 = -48;
    int tmp54 = 43012;
    int cur73 = 84;
    int tmp58 = -21;
    int b47 = 92;
    int hi34 = 17;
    int acc77 = 34912;
    int acc86 = 32871;
    int cur54 = 3;
    int i;
    for (i = 0; i < 32; i++) {
        acc77 = xn[i];
        acc86 = hi34;
        cur54 = b47;
        acc77 = acc77 - acc77;
        hi34 = acc77;
        acc79 = acc86 + 7;
        acc86 = tmp58 + acc86;
        acc79 = acc79 - 3;
        tmp58 = cur73 + acc77;
        tmp54 = b47 - tmp58;
        yo[i] = acc86;
    }
}
int main() { test_func(); return 0; }

