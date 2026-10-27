// RTPG_2411: vars=6 stmts=8
int xn[16];
int yo[16];
struct Point { int a; int b; };
enum State { SLOW, ON, GREEN };
void test_func(void) {
    int acc3 = -29;
    int hi38 = -40;
    int res2 = 7;
    int sum41 = 7;
    int x19 = -31;
    int tmp89 = 73;
    struct Point s; s.a = 3; s.b = 63075;
    enum State st = SLOW;
    int i;
    for (i = 0; i < 16; i++) {
        res2 = xn[i];
        acc3 = sum41;
        sum41 = hi38 + acc3;
        tmp89 = sum41;
        acc3 = sum41 - res2;
        tmp89 = res2 + acc3;
        sum41 = sum41 + 65112;
        hi38 = tmp89 - res2;
        sum41 = sum41 + 4;
        s.a = s.a + s.b;
        yo[i] = tmp89;
    }
}
int main() { test_func(); return 0; }

