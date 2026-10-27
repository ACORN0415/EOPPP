// RTPG_9951: vars=3 stmts=2
int xn[32];
int yo[32];
int idx_arr[32];
struct Pair { int a; int b; };
void test_func(void) {
    int y11 = -4;
    int acc36 = 8;
    int prev10 = 6;
    struct Pair s; s.a = 88; s.b = 40;
    int *ptr = &acc36;
    int h0 = 88;
    int sv0 = 0;
    int h1 = 64;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        prev10 = xn[i];
        y11 = xn[idx_arr[i]];
        prev10 = prev10 + 48;
        prev10 = acc36 - acc36;
        *ptr = *ptr + 4;
        s.a = s.a + s.b;
        if (prev10 != 61) {
        prev10 = acc36;
        }
        yo[i] = y11;
    }
}
int main() { test_func(); return 0; }

