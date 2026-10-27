// RTPG_6801: vars=7 stmts=7
struct Point { int a; int b; };
void test_func(void) {
    int hi11 = -24;
    int cur9 = 57990;
    int x59 = 4;
    int prev0 = 62;
    int acc27 = 58;
    int v37 = 60228;
    int res80 = 4;
    struct Point s; s.a = 10; s.b = 5;
    int i;
    for (i = 0; i < 27; i++) {
        int j;
        for (j = 0; j < 9; j++) {
        hi11 = hi11 + 2;
        acc27 = acc27 + 3;
        hi11 = cur9;
        hi11 = hi11 + acc27;
        prev0 = cur9 - hi11;
        v37 = acc27 - 9;
        cur9 = res80 + cur9;
        }
    }
}
int main() { test_func(); return 0; }

