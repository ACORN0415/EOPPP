// RTPG_3863: vars=5 stmts=4
int xn[32];
int yo[32];
struct Pair { int a; int b; };
void test_func(void) {
    int y2 = 1;
    int dat99 = 76;
    int c86 = 37;
    int cur19 = 2;
    int cur97 = 61;
    struct Pair s; s.a = 4; s.b = 43;
    int i;
    for (i = 0; i < 32; i++) {
        cur97 = xn[i];
        y2 = y2 + 4;
        y2 = cur97 + cur19;
        y2 = cur97 - 43;
        c86 = c86 + 2;
        s.a = s.a + s.b;
        if (c86 != 50) {
        dat99 = y2 - cur19;
        }
        yo[i] = c86;
    }
}
int main() { test_func(); return 0; }

