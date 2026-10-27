// RTPG_6414: vars=7 stmts=5
struct Node { int a; int b; };
void test_func(void) {
    int val53 = 44;
    int v21 = -39;
    int z90 = 56;
    int acc69 = 64821;
    int x84 = 19;
    int hi16 = 60602;
    int x22 = 9;
    struct Node s; s.a = 36114; s.b = 29;
    int *ptr = &v21;
    int i;
    for (i = 0; i < 65; i++) {
        val53 = x22 - val53;
        hi16 = val53 + x84;
        v21 = x22;
        x22 = val53 + val53;
        val53 = hi16 + 10;
        *ptr = *ptr + 4;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

