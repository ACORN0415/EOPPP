// RTPG_4161: vars=7 stmts=2
struct Node { int a; int b; };
void test_func(void) {
    int z92 = -44;
    int c20 = 37;
    double tmp16 = 17.86;
    int acc22 = 0;
    int res98 = 17;
    int lo20 = 4;
    int out24 = 79;
    struct Node s; s.a = 2; s.b = 60434;
    int i;
    for (i = 0; i < 50; i++) {
        z92 = lo20 + 9;
        out24 = res98;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

