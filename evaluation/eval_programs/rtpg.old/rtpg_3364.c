// RTPG_3364: vars=3 stmts=4
struct Point { int a; int b; };
void test_func(void) {
    int tmp63 = 7;
    int val18 = -34;
    int v37 = 30960;
    struct Point s; s.a = -13; s.b = 40996;
    int *ptr = &val18;
    int i;
    for (i = 0; i < 75; i++) {
        val18 = val18 + 2;
        v37 = v37 + val18;
        val18 = tmp63;
        v37 = tmp63 + val18;
        *ptr = *ptr + 5;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

