// RTPG_761: vars=3 stmts=8
int xn[64];
int yo[64];
struct Pair { int a; int b; };
void test_func(void) {
    int x70 = -46;
    int lo88 = -20;
    int a34 = -24;
    struct Pair s; s.a = -6; s.b = 10;
    int i;
    for (i = 0; i < 64; i++) {
        a34 = xn[i];
        x70 = a34 + x70;
        lo88 = a34 + x70;
        a34 = lo88 + 19328;
        x70 = lo88 - 87;
        x70 = x70 + 5;
        x70 = x70 + 33;
        lo88 = a34;
        x70 = x70 - 23347;
        s.a = s.a + s.b;
        yo[i] = x70;
    }
}
int main() { test_func(); return 0; }

