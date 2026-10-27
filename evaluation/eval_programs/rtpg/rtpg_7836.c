// RTPG_7836: vars=4 stmts=3
struct Node { int a; int b; };
void test_func(void) {
    int lo62 = 39822;
    int a49 = 6;
    int x19 = 23799;
    int cur74 = 20;
    struct Node s; s.a = 57; s.b = 7;
    int h0 = 6;
    int sv0 = 0;
    int h1 = 9;
    int sv1 = 0;
    int i;
    for (i = 0; i < 28; i++) {
        cur74 = x19 + 8;
        x19 = x19 + 34968;
        a49 = lo62;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

