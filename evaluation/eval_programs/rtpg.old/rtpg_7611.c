// RTPG_7611: vars=7 stmts=6
int xn[64];
int yo[64];
struct Data { int a; int b; };
void test_func(void) {
    int cur36 = 10;
    float y92 = 66.34;
    float c26 = 82.29;
    int v4 = -20;
    float a0 = 12.68;
    int acc49 = 34050;
    int tmp12 = 59890;
    struct Data s; s.a = -35; s.b = -13;
    int h0 = 0;
    int sv0 = 0;
    int h1 = 3;
    int sv1 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        cur36 = xn[i];
        v4 = y92 * 9;
        tmp12 = tmp12 - 1;
        y92 = tmp12 * 64709;
        c26 = y92 + acc49;
        y92 = cur36;
        a0 = a0 + 2;
        s.a = s.a + s.b;
        yo[i] = cur36;
    }
}
int main() { test_func(); return 0; }

