// RTPG_4714: vars=10 stmts=2
struct Point { int a; int b; };
void test_func(void) {
    int v62 = 87;
    int cur96 = 59;
    int val77 = 8;
    int z61 = 8;
    int val71 = 21;
    int v54 = 11808;
    int v36 = 10148;
    int dat6 = 6074;
    int b44 = 5;
    int b13 = 21;
    struct Point s; s.a = 29679; s.b = 75;
    int *ptr = &cur96;
    int i;
    for (i = 0; i < 78; i++) {
        v54 = val77 + 31;
        z61 = v36 - z61;
        *ptr = *ptr + 3;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

