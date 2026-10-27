// RTPG_6854: vars=8 stmts=2
int xn[32];
int yo[32];
struct Data { int a; int b; };
void test_func(void) {
    int dat85 = 83;
    int lo80 = 84;
    int tmp60 = 4693;
    int cur76 = 10;
    int cur6 = 51199;
    int lo24 = 45292;
    int v72 = 52116;
    int b17 = 93;
    struct Data s; s.a = 10; s.b = 4;
    int h0 = 20513;
    int sv0 = 0;
    int h1 = 32416;
    int sv1 = 0;
    int h2 = 28979;
    int sv2 = 0;
    int h3 = 44;
    int sv3 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        lo80 = xn[i];
        lo24 = lo80 * -4;
        dat85 = v72 + cur6;
        s.a = s.a + s.b;
        if (tmp60 <= -38) {
        dat85 = lo80 + lo80;
        }
        yo[i] = tmp60;
    }
}
int main() { test_func(); return 0; }

