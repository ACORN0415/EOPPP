// RTPG_4157: vars=3 stmts=4
int xn[16];
int yo[16];
struct Point { int a; int b; };
void test_func(void) {
    int hi85 = 80;
    int prev83 = 18;
    int z52 = 47;
    struct Point s; s.a = 4; s.b = 75;
    int h0 = 37808;
    int sv0 = 0;
    int h1 = -26;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        hi85 = xn[i];
        z52 = prev83 - 3;
        prev83 = hi85 - prev83;
        z52 = hi85 - 42;
        hi85 = prev83 - 10;
        s.a = s.a + s.b;
        if (z52 == 57) {
        prev83 = z52 + 3;
        }
        yo[i] = prev83;
    }
}
int main() { test_func(); return 0; }

