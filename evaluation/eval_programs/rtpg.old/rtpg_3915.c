// RTPG_3915: vars=4 stmts=2
int xn[16];
int yo[16];
struct Pair { int a; int b; };
void test_func(void) {
    int cur87 = 60;
    int v21 = 63820;
    int out76 = 64674;
    int cur98 = 64;
    struct Pair s; s.a = 17; s.b = 50;
    int *ptr = &cur87;
    int h0 = 37198;
    int sv0 = 0;
    int h1 = 8;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        v21 = xn[i];
        v21 = cur98;
        cur98 = v21 * 1;
        *ptr = *ptr + 3;
        s.a = s.a + s.b;
        if (cur98 <= 27) {
        out76 = out76 + 1;
        }
        yo[i] = cur98;
    }
}
int main() { test_func(); return 0; }

