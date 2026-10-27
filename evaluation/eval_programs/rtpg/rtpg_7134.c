// RTPG_7134: vars=8 stmts=6
int idx_arr[16];
struct Point { int a; int b; };
void test_func(void) {
    int hi48 = -3;
    int val53 = -7;
    int cnt89 = 14;
    int lo25 = 0;
    int v9 = -42;
    int c21 = 45057;
    int v74 = 7;
    int prev87 = 36;
    struct Point s; s.a = 4; s.b = -37;
    int h0 = 2;
    int sv0 = 0;
    int h1 = 78;
    int sv1 = 0;
    int i;
    for (i = 0; i < 23; i++) {
        v9 = xn[idx_arr[i]];
        val53 = val53 - 5;
        lo25 = v9 - 51;
        prev87 = hi48 + c21;
        v74 = prev87 * 61330;
        v74 = prev87 * 27;
        c21 = v9 * 46964;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

