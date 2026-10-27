// RTPG_4392: vars=8 stmts=4
struct Point { int a; int b; };
void test_func(void) {
    int sum11 = 21169;
    int cur31 = 0;
    int x15 = 9558;
    int z26 = 53455;
    int sum65 = 6;
    int out50 = 9;
    int cur65 = 56;
    int z37 = -15;
    struct Point s; s.a = 27; s.b = -42;
    int i;
    for (i = 0; i < 78; i++) {
        cur31 = x15;
        x15 = sum65 + cur65;
        z26 = cur31 - sum11;
        x15 = x15 + sum11;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

