// RTPG_1711: vars=10 stmts=6
int xn[32];
int yo[32];
struct Pair { int a; int b; };
void test_func(void) {
    int a58 = 0;
    int v63 = 19691;
    int dat0 = 3;
    int z19 = 2622;
    int y85 = 8;
    int y35 = 9;
    int z0 = -18;
    int hi63 = 4;
    int tmp64 = 0;
    int x87 = 29;
    struct Pair s; s.a = 7; s.b = 6;
    int i;
    for (i = 0; i < 32; i++) {
        hi63 = xn[i];
        y35 = tmp64 + 59;
        z0 = z0 + y85;
        v63 = tmp64;
        z19 = a58 % z0;
        v63 = x87 ^ y85;
        y35 = v63;
        s.a = s.a + s.b;
        yo[i] = dat0;
    }
}
int main() { test_func(); return 0; }

