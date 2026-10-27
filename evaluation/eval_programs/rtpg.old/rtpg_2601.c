// RTPG_2601: vars=8 stmts=8
struct Node { int a; int b; };
void test_func(void) {
    int cur73 = 25242;
    int a65 = 35;
    int res10 = 1;
    int val23 = 2;
    int b71 = -18;
    int res59 = 1;
    int cur35 = 12001;
    int res96 = 10;
    struct Node s; s.a = 5; s.b = -2;
    int i;
    for (i = 0; i < 89; i++) {
        b71 = b71 - 4;
        cur73 = val23;
        val23 = cur35 + b71;
        cur73 = a65 + res10;
        b71 = val23 - b71;
        res59 = res59 - b71;
        a65 = a65 - 2;
        res10 = res10 - b71;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

