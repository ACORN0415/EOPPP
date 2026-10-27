// RTPG_2895: vars=10 stmts=8
int xn[64];
int yo[64];
struct Pair { int a; int b; };
void test_func(void) {
    int v30 = 9;
    int tmp3 = 75;
    int dat2 = 88;
    int prev0 = 10;
    int acc35 = 5898;
    int cnt75 = 72;
    int out46 = 3;
    int a62 = 59;
    int cnt76 = 3;
    int z31 = 4;
    struct Pair s; s.a = 20213; s.b = 73;
    int i;
    for (i = 0; i < 64; i++) {
        cnt76 = xn[i];
        acc35 = z31;
        cnt76 = prev0 - tmp3;
        a62 = tmp3 - cnt76;
        dat2 = v30 - 31;
        tmp3 = dat2;
        a62 = cnt76;
        tmp3 = prev0 - 95;
        cnt76 = cnt76;
        s.a = s.a + s.b;
        yo[i] = prev0;
    }
}
int main() { test_func(); return 0; }

