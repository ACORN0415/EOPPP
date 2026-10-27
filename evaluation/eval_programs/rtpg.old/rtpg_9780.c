// RTPG_9780: vars=4 stmts=11
int xn[64];
int yo[64];
void test_func(void) {
    int y42 = 61132;
    int lo99 = 89;
    int lo44 = 13071;
    int res56 = 1;
    int h0 = 53330;
    int sv0 = 0;
    int h1 = 43;
    int sv1 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        lo99 = xn[i];
        res56 = lo99 * 7;
        y42 = lo99 | y42;
        res56 = y42 * 4;
        lo99 = y42 + lo44;
        res56 = res56 * 3;
        res56 = y42 - res56;
        res56 = res56 + lo99;
        lo44 = lo99 - y42;
        y42 = y42 + 3;
        lo99 = y42 * 28;
        lo99 = y42 - 27719;
        yo[i] = y42;
    }
}
int main() { test_func(); return 0; }

