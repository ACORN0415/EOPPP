// RTPG_7326: vars=9 stmts=4
struct Data { int a; int b; };
void test_func(void) {
    int c19 = 1;
    int acc66 = 80;
    int b73 = 5047;
    int v10 = 40;
    int y63 = 33047;
    int prev58 = 15;
    int res98 = 27705;
    int cnt23 = 0;
    int acc10 = 7;
    struct Data s; s.a = 55956; s.b = 36538;
    int h0 = -30;
    int sv0 = 0;
    int h1 = -6;
    int sv1 = 0;
    int h2 = 10;
    int sv2 = 0;
    int i;
    for (i = 0; i < 50; i++) {
        b73 = prev58;
        acc10 = acc10 + prev58;
        acc10 = acc66 * 9;
        res98 = acc10;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

