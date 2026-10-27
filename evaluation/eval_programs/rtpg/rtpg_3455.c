// RTPG_3455: vars=8 stmts=11
int xn[64];
int yo[64];
void test_func(void) {
    int val80 = 69;
    int acc49 = 52255;
    int sum5 = 37602;
    int tmp41 = 88;
    int y60 = 5037;
    int c29 = 54;
    int acc73 = 56032;
    int c28 = 73;
    int i;
    for (i = 0; i < 64; i++) {
        tmp41 = xn[i];
        acc49 = val80 + acc73;
        tmp41 = c29 + acc73;
        y60 = val80 - sum5;
        tmp41 = tmp41 - 3;
        val80 = val80 - 1;
        c29 = tmp41 - 1;
        y60 = val80;
        c29 = acc73 + 5221;
        val80 = acc49;
        val80 = c29 + sum5;
        val80 = sum5;
        if (val80 < 78) {
        y60 = tmp41 - sum5;
        }
        yo[i] = val80;
    }
}
int main() { test_func(); return 0; }

