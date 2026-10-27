// RTPG_1488: vars=4 stmts=4
int xn[16];
int yo[16];
struct Point { int a; int b; };
void test_func(void) {
    int cnt54 = 1;
    int prev32 = -29;
    int y95 = 27677;
    int res98 = 6464;
    struct Point s; s.a = 15; s.b = 2;
    int i;
    for (i = 0; i < 16; i++) {
        prev32 = xn[i];
        prev32 = prev32 + cnt54;
        y95 = y95 - res98;
        res98 = y95 - y95;
        cnt54 = cnt54 + 1;
        s.a = s.a + s.b;
        yo[i] = res98;
    }
}
int main() { test_func(); return 0; }

