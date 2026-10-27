// RTPG_8245: vars=11 stmts=4
int xn[32];
int yo[32];
struct Data { int a; int b; };
void test_func(void) {
    float b70 = 67.28;
    int acc0 = 11226;
    int tmp59 = 49;
    int lo74 = 39506;
    int v98 = 5;
    float z90 = 35.38;
    int tmp65 = -15;
    double res0 = 34.24;
    int hi78 = 8;
    float dat45 = 90.07;
    int y42 = 11006;
    struct Data s; s.a = 47734; s.b = 16;
    int h0 = 24;
    int sv0 = 0;
    int h1 = 24;
    int sv1 = 0;
    int h2 = 27862;
    int sv2 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        res0 = xn[i];
        lo74 = lo74 + 5;
        v98 = v98 + 2;
        tmp59 = lo74;
        b70 = y42;
        s.a = s.a + s.b;
        if (hi78 != 31) {
        tmp65 = res0 - tmp59;
        }
        yo[i] = z90;
    }
}
int main() { test_func(); return 0; }

