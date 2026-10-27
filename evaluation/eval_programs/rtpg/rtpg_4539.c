// RTPG_4539: vars=6 stmts=5
int xn[64];
int yo[64];
struct Data { int a; int b; };
void test_func(void) {
    int lo84 = 10;
    int val17 = 8;
    int lo31 = 8;
    int cnt43 = 9;
    int tmp56 = 25763;
    int y74 = -14;
    struct Data s; s.a = 24; s.b = 31;
    int i;
    for (i = 0; i < 64; i++) {
        cnt43 = xn[i];
        cnt43 = tmp56;
        lo31 = val17;
        tmp56 = lo84 + cnt43;
        y74 = lo84 + val17;
        lo84 = lo84 - 2;
        s.a = s.a + s.b;
        if (val17 > 30) {
        tmp56 = lo31;
        }
        yo[i] = tmp56;
    }
}
int main() { test_func(); return 0; }

