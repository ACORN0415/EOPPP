// RTPG_4673: vars=3 stmts=9
struct Point { int a; int b; };
void test_func(void) {
    int v30 = 5;
    int hi28 = 25;
    int tmp0 = 82;
    struct Point s; s.a = 4; s.b = 64462;
    int i;
    for (i = 0; i < 32; i++) {
        hi28 = v30 ^ v30;
        tmp0 = tmp0 + 2;
        hi28 = v30 - 28455;
        hi28 = tmp0;
        v30 = tmp0 | v30;
        tmp0 = hi28;
        hi28 = v30 + 8;
        hi28 = hi28 - 5;
        v30 = hi28 + hi28;
        s.a = s.a + s.b;
        if (v30 == 22) {
        hi28 = hi28 - 1;
        }
    }
}
int main() { test_func(); return 0; }

