// RTPG_8490: vars=5 stmts=4
struct Data { int a; int b; };
void test_func(void) {
    int acc69 = -47;
    int val13 = 18063;
    int tmp85 = 5;
    int cnt34 = 32;
    int acc31 = 52303;
    struct Data s; s.a = 7153; s.b = 9300;
    int h0 = 3;
    int sv0 = 0;
    int h1 = 52;
    int sv1 = 0;
    int i;
    for (i = 0; i < 33; i++) {
        tmp85 = acc31 + val13;
        acc31 = cnt34;
        acc69 = acc69 * 0;
        acc69 = acc31;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

