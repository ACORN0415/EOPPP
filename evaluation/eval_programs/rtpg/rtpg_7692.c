// RTPG_7692: vars=7 stmts=6
int xn[64];
int yo[64];
struct Data { int a; int b; };
void test_func(void) {
    int c26 = 10;
    float tmp12 = 66.34;
    float acc49 = 82.29;
    int y92 = -20;
    float a0 = 12.68;
    int cur36 = 34050;
    int v4 = 59890;
    struct Data s; s.a = -35; s.b = -13;
    int h0 = 0;
    int sv0 = 0;
    int h1 = 3;
    int sv1 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        c26 = xn[i];
        y92 = tmp12 * 9;
        v4 = v4 - 1;
        tmp12 = v4 * 64709;
        acc49 = tmp12 + cur36;
        tmp12 = c26;
        a0 = a0 + 2;
        s.a = s.a + s.b;
        yo[i] = c26;
    }
}
int main() { test_func(); return 0; }

