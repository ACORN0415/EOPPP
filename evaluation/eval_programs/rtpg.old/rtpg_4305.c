// RTPG_4305: vars=14 stmts=7
int xn[32];
int yo[32];
struct Point { int a; int b; };
void test_func(void) {
    int dat88 = 4;
    int hi14 = 7;
    float prev89 = 99.42;
    int v13 = 14;
    int hi18 = 32825;
    double v79 = 49.56;
    float val19 = 81.69;
    float prev47 = 33.14;
    double val81 = 40.96;
    int res62 = 53232;
    int z34 = -28;
    int a96 = 38;
    float val84 = 10.50;
    int z46 = 61561;
    struct Point s; s.a = 6; s.b = 25913;
    int i;
    for (i = 0; i < 32; i++) {
        val81 = xn[i];
        v13 = dat88 - val19;
        val81 = val81 + val19;
        a96 = prev47 % v79;
        val81 = val81 - 2;
        hi18 = hi14 | res62;
        v79 = hi18 & dat88;
        prev47 = hi14 + prev47;
        s.a = s.a + s.b;
        yo[i] = prev89;
    }
}
int main() { test_func(); return 0; }

