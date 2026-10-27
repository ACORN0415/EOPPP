// RTPG_4272: vars=7 stmts=8
struct Node { int a; int b; };
void test_func(void) {
    int v68 = 34776;
    int res70 = 2;
    int y24 = 35428;
    int out63 = 65;
    int prev85 = 25422;
    int out81 = 8;
    int z9 = 8;
    struct Node s; s.a = 6499; s.b = 4;
    int h0 = 2;
    int sv0 = 0;
    int h1 = 77;
    int sv1 = 0;
    int i;
    for (i = 0; i < 24; i++) {
        v68 = y24 - z9;
        out81 = v68;
        out81 = v68 + y24;
        y24 = prev85 + v68;
        prev85 = prev85 - 2;
        out81 = z9 * 95;
        res70 = res70;
        out63 = out63 - 5;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

