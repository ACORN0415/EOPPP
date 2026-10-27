// RTPG_1781: vars=8 stmts=2
int xn[32];
int yo[32];
struct Pair { int a; int b; };
void test_func(void) {
    int lo12 = 54351;
    int z90 = 30112;
    int acc58 = 25873;
    int x38 = 48;
    int c52 = 23;
    int hi69 = 17;
    int out4 = -28;
    int acc44 = 3697;
    struct Pair s; s.a = 58; s.b = 92;
    int i;
    for (i = 0; i < 32; i++) {
        x38 = xn[i];
        hi69 = out4 + acc58;
        z90 = acc44 - 6902;
        s.a = s.a + s.b;
        if (out4 > 30) {
        x38 = lo12;
        }
        yo[i] = z90;
    }
}
int main() { test_func(); return 0; }

