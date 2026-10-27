// RTPG_2715: vars=8 stmts=4
struct Point { int a; int b; };
void test_func(void) {
    int c54 = 19;
    int z35 = 61621;
    int cnt20 = 48;
    int z45 = -6;
    int b67 = 60669;
    int v90 = 30078;
    int hi0 = 6;
    int res80 = 42;
    struct Point s; s.a = -25; s.b = -27;
    int i;
    for (i = 0; i < 50; i++) {
        c54 = hi0 - b67;
        b67 = z45;
        z35 = z35 + 4;
        z35 = c54 + z45;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

