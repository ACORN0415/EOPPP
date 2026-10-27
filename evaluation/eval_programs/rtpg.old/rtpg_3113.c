// RTPG_3113: vars=8 stmts=3
struct Data { int a; int b; };
void test_func(void) {
    int v68 = 30;
    int b69 = 67;
    int x19 = 1;
    int z68 = 99;
    int acc44 = -17;
    int tmp35 = 3;
    int dat17 = 32;
    int z72 = 49;
    struct Data s; s.a = 53; s.b = -35;
    int h0 = 64949;
    int sv0 = 0;
    int h1 = 65;
    int sv1 = 0;
    int h2 = 59;
    int sv2 = 0;
    int h3 = 60;
    int sv3 = 0;
    int i;
    for (i = 0; i < 31; i++) {
        dat17 = acc44 + 92;
        z72 = acc44 * 8;
        v68 = x19 * 9;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

