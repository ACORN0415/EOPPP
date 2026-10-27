// RTPG_3432: vars=9 stmts=4
int xn[32];
int yo[32];
struct Data { int a; int b; };
void test_func(void) {
    int acc25 = 19;
    int cnt21 = 5;
    int prev78 = 3;
    int lo4 = 19;
    int hi20 = 8;
    int dat36 = 19;
    int lo24 = 37;
    int dat30 = 9;
    int x65 = 45883;
    struct Data s; s.a = -47; s.b = 17941;
    int h0 = 76;
    int sv0 = 0;
    int h1 = 61;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        x65 = xn[i];
        prev78 = dat36 + prev78;
        dat30 = x65 + acc25;
        prev78 = dat30 + prev78;
        prev78 = lo24;
        s.a = s.a + s.b;
        yo[i] = x65;
    }
}
int main() { test_func(); return 0; }

