// RTPG_1035: vars=8 stmts=8
int xn[32];
int yo[32];
struct Point { int a; int b; };
void test_func(void) {
    int cur21 = 64598;
    int res38 = 16199;
    int a6 = 70;
    int lo78 = 55373;
    int lo88 = 1;
    int y97 = 46;
    int y84 = -3;
    int b13 = 25381;
    struct Point s; s.a = 6; s.b = 37;
    int i;
    for (i = 0; i < 32; i++) {
        y97 = xn[i];
        res38 = a6;
        a6 = y84 / cur21;
        lo78 = cur21 - y84;
        a6 = a6 & lo78;
        res38 = res38 + 3;
        y84 = y84 - y97;
        b13 = y97 + a6;
        lo78 = a6 + y97;
        s.a = s.a + s.b;
        yo[i] = lo88;
    }
}
int main() { test_func(); return 0; }

