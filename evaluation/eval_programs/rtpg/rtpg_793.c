// RTPG_793: vars=5 stmts=5
int xn[64];
int yo[64];
struct Data { int a; int b; };
void test_func(void) {
    int c32 = 9;
    int tmp78 = 33;
    int prev53 = 57;
    int res11 = 7;
    int res16 = 73;
    struct Data s; s.a = 1855; s.b = 56;
    int i;
    for (i = 0; i < 64; i++) {
        prev53 = xn[i];
        res16 = c32;
        tmp78 = tmp78 - res16;
        tmp78 = tmp78 + res11;
        tmp78 = tmp78 + 2;
        res11 = tmp78;
        s.a = s.a + s.b;
        yo[i] = tmp78;
    }
}
int main() { test_func(); return 0; }

