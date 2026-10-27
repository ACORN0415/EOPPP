// RTPG_2648: vars=9 stmts=6
struct Point { int a; int b; };
void test_func(void) {
    int hi87 = 5;
    int acc25 = 65;
    int prev86 = -2;
    int prev97 = 10635;
    int cur65 = 0;
    int tmp27 = 4;
    int v3 = 14;
    int res18 = -1;
    int v92 = 2473;
    struct Point s; s.a = 35; s.b = 2;
    int i;
    for (i = 0; i < 53; i++) {
        hi87 = prev97;
        acc25 = v3 + prev86;
        acc25 = cur65 - prev97;
        hi87 = hi87 - 5;
        prev97 = res18 - prev86;
        cur65 = tmp27 + v3;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

