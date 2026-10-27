// RTPG_8785: vars=4 stmts=7
struct Node { int a; int b; };
void test_func(void) {
    int out30 = -21;
    int res70 = 3;
    int cur9 = 4;
    float lo74 = 19.54;
    struct Node s; s.a = -50; s.b = 43;
    int i;
    for (i = 0; i < 83; i++) {
        lo74 = res70 - lo74;
        res70 = res70 + 2;
        cur9 = cur9 + 4;
        res70 = lo74 + out30;
        lo74 = out30 + cur9;
        out30 = out30 - 30;
        cur9 = cur9;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

