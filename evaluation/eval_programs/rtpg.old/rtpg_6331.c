// RTPG_6331: vars=10 stmts=6
int xn[16];
int yo[16];
void test_func(void) {
    int b53 = -49;
    int tmp45 = 56;
    int lo82 = 22;
    int y71 = -13;
    int a21 = 5;
    int y79 = 4;
    int c77 = 10;
    int prev62 = 0;
    int val17 = 57;
    int z59 = 38755;
    int i;
    for (i = 0; i < 16; i++) {
        y71 = xn[i];
        lo82 = b53 - -32;
        z59 = tmp45;
        y79 = b53 + 4;
        prev62 = prev62 + 1;
        c77 = c77;
        a21 = y71 ^ lo82;
        if (tmp45 > 59) goto done;
        if (c77 == 29) {
        val17 = y71 + 2;
        }
        yo[i] = y71;
    }
done:
    lo82 = 0;
}
int main() { test_func(); return 0; }

