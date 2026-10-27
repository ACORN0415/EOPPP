// RTPG_2409: vars=3 stmts=6
struct Point { int a; int b; };
void test_func(void) {
    int z44 = 37;
    int prev31 = 7;
    int res40 = 41688;
    struct Point s; s.a = -33; s.b = 0;
    int i;
    for (i = 0; i < 14; i++) {
        z44 = res40 & res40;
        prev31 = z44 - res40;
        z44 = prev31 | z44;
        z44 = z44 / res40;
        z44 = z44 - 2;
        prev31 = prev31 - 1925;
        s.a = s.a + s.b;
        if (z44 < 47) {
        res40 = res40 - 82;
        }
    }
}
int main() { test_func(); return 0; }

