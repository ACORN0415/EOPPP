// RTPG_8554: vars=3 stmts=12
struct Data { int a; int b; };
void test_func(void) {
    int val47 = 36108;
    int res22 = 14;
    int a33 = 15;
    struct Data s; s.a = 6417; s.b = 7;
    int i;
    for (i = 0; i < 93; i++) {
        res22 = val47;
        a33 = res22 & val47;
        res22 = res22 + a33;
        val47 = a33 - a33;
        val47 = val47 + 57119;
        res22 = res22 + a33;
        val47 = a33 - val47;
        val47 = a33 - a33;
        val47 = res22 | val47;
        res22 = res22 + res22;
        val47 = a33 - val47;
        a33 = val47 - res22;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

