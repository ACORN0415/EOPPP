// RTPG_957: vars=3 stmts=5
int xn[32];
int yo[32];
struct Data { int a; int b; };
void test_func(void) {
    int val27 = 6248;
    int acc49 = 0;
    int prev57 = -23;
    struct Data s; s.a = 7; s.b = -2;
    int *ptr = &prev57;
    int i;
    for (i = 0; i < 70; i++) {
        int j;
        for (j = 0; j < 17; j++) {
        prev57 = val27 - acc49;
        acc49 = prev57 + prev57;
        val27 = val27 - 4;
        prev57 = val27 - prev57;
        val27 = acc49;
        }
    }
}
int main() { test_func(); return 0; }

