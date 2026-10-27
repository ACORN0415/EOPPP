// RTPG_2253: vars=6 stmts=3
struct Node { int a; int b; };
void test_func(void) {
    int hi71 = -14;
    double acc63 = 78.17;
    float cur16 = 54.47;
    int v85 = 57;
    int out59 = 68;
    int tmp63 = 67;
    struct Node s; s.a = 4617; s.b = 0;
    int i;
    for (i = 0; i < 42; i++) {
        out59 = tmp63;
        hi71 = hi71 - 5;
        acc63 = v85 + out59;
        s.a = s.a + s.b;
        if (v85 >= 97) {
        acc63 = cur16 + cur16;
        }
    }
}
int main() { test_func(); return 0; }

