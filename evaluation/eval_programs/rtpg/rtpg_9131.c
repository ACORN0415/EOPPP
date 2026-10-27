// RTPG_9131: vars=6 stmts=7
int xn[32];
int yo[32];
void test_func(void) {
    int x77 = 9884;
    int a99 = 1;
    int acc28 = -9;
    int tmp51 = 1758;
    int y45 = 43;
    int val96 = 7;
    int i;
    for (i = 0; i < 32; i++) {
        x77 = xn[i];
        tmp51 = tmp51 - 2;
        y45 = y45 + 1;
        x77 = acc28 + 6;
        a99 = a99;
        val96 = x77 - acc28;
        acc28 = a99 + 17581;
        acc28 = val96 + acc28;
        yo[i] = val96;
    }
}
int main() { test_func(); return 0; }

