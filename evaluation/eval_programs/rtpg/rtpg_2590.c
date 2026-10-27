// RTPG_2590: vars=8 stmts=8
struct Node { int a; int b; };
void test_func(void) {
    int val23 = 25242;
    int res59 = 35;
    int a65 = 1;
    int cur73 = 2;
    int res10 = -18;
    int b71 = 1;
    int res96 = 12001;
    int cur35 = 10;
    struct Node s; s.a = 5; s.b = -2;
    int i;
    for (i = 0; i < 89; i++) {
        res10 = res10 - 4;
        val23 = cur73;
        cur73 = res96 + res10;
        val23 = res59 + a65;
        res10 = cur73 - res10;
        b71 = b71 - res10;
        res59 = res59 - 2;
        a65 = a65 - res10;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

