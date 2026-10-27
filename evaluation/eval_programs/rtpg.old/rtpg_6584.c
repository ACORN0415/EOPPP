// RTPG_6584: vars=8 stmts=2
struct Node { int a; int b; };
void test_func(void) {
    int val40 = 0;
    int hi30 = 7;
    int acc27 = -44;
    int z19 = 20260;
    int y17 = -35;
    int v32 = 5;
    int cur94 = 100;
    int z59 = 40;
    struct Node s; s.a = 2; s.b = 77;
    int i;
    for (i = 0; i < 20; i++) {
        z59 = v32 + z59;
        z59 = z59 + 1;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

