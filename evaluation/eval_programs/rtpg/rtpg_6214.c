// RTPG_6214: vars=6 stmts=8
int xn[32];
int yo[32];
struct Data { int a; int b; };
void test_func(void) {
    int cur89 = 2;
    int cur90 = 48;
    int res67 = 62;
    int z31 = 30;
    int a48 = 4;
    int hi35 = 7;
    struct Data s; s.a = -50; s.b = 0;
    int i;
    for (i = 0; i < 32; i++) {
        a48 = xn[i];
        cur90 = res67 - cur89;
        hi35 = hi35 + z31;
        cur89 = a48 & cur89;
        hi35 = hi35 + 3;
        a48 = cur89 / a48;
        hi35 = a48 - -15;
        res67 = res67 + 1;
        z31 = cur90 - 53;
        s.a = s.a + s.b;
        yo[i] = res67;
    }
}
int main() { test_func(); return 0; }

