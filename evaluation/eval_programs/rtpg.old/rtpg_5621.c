// RTPG_5621: vars=7 stmts=2
int xn[32];
int yo[32];
struct Pair { int a; int b; };
void test_func(void) {
    int cnt12 = 16;
    int a66 = 1;
    int v91 = -39;
    int v61 = 54;
    int val3 = 75;
    int v38 = 1;
    int z37 = 65315;
    struct Pair s; s.a = 51; s.b = 19170;
    int h0 = 78;
    int sv0 = 0;
    int h1 = 70;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        v61 = xn[i];
        val3 = val3 - 2;
        z37 = val3 + v61;
        s.a = s.a + s.b;
        yo[i] = cnt12;
    }
}
int main() { test_func(); return 0; }

