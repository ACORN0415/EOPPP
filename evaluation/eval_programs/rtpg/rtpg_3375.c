// RTPG_3375: vars=3 stmts=4
struct Point { int a; int b; };
void test_func(void) {
    int v37 = 7;
    int tmp63 = -34;
    int val18 = 30960;
    struct Point s; s.a = -13; s.b = 40996;
    int *ptr = &tmp63;
    int i;
    for (i = 0; i < 75; i++) {
        tmp63 = tmp63 + 2;
        val18 = val18 + tmp63;
        tmp63 = v37;
        val18 = v37 + tmp63;
        *ptr = *ptr + 5;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

