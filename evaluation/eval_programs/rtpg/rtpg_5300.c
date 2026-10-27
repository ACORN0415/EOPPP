// RTPG_5300: vars=8 stmts=4
int xn[16];
int yo[16];
struct Pair { int a; int b; };
void test_func(void) {
    int tmp6 = -41;
    int res98 = 9;
    int dat64 = -15;
    int val45 = 6;
    int cnt19 = 89;
    int z94 = 5433;
    int cnt39 = 5;
    int cnt91 = -39;
    struct Pair s; s.a = 6; s.b = 32348;
    int *ptr = &cnt19;
    int i;
    for (i = 0; i < 16; i++) {
        dat64 = xn[i];
        cnt91 = dat64;
        dat64 = res98;
        dat64 = dat64 - 2;
        dat64 = dat64 + cnt91;
        *ptr = *ptr + 3;
        s.a = s.a + s.b;
        yo[i] = tmp6;
    }
}
int main() { test_func(); return 0; }

