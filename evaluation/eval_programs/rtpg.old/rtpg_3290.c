// RTPG_3290: vars=4 stmts=7
struct Data { int a; int b; };
void test_func(void) {
    int c98 = -23;
    int z85 = 22;
    int lo33 = 1;
    int res94 = 5;
    struct Data s; s.a = 8386; s.b = 60;
    int i;
    for (i = 0; i < 81; i++) {
        lo33 = z85 + lo33;
        z85 = res94;
        res94 = c98 + 47;
        lo33 = lo33;
        lo33 = res94 + 28886;
        lo33 = lo33 - 50935;
        lo33 = lo33 - 3;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

