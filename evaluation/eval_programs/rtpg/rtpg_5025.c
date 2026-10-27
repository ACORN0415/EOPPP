// RTPG_5025: vars=6 stmts=2
int xn[64];
int yo[64];
struct Pair { int a; int b; };
void test_func(void) {
    int cnt52 = 3;
    int cur12 = 62436;
    int a88 = 39449;
    int cnt21 = 1;
    int b62 = 2;
    int cnt15 = 24;
    struct Pair s; s.a = 2; s.b = 2;
    int i;
    for (i = 0; i < 64; i++) {
        cur12 = xn[i];
        b62 = cnt52;
        cnt21 = cnt21 + 1;
        s.a = s.a + s.b;
        if (a88 > 9) goto done;
        yo[i] = cnt15;
    }
done:
    cnt15 = 0;
}
int main() { test_func(); return 0; }

