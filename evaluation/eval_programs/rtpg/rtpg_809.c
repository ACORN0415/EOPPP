// RTPG_809: vars=3 stmts=8
int xn[32];
int yo[32];
struct Pair { int a; int b; };
void test_func(void) {
    int lo48 = 27;
    int c49 = 8;
    int b26 = 17;
    struct Pair s; s.a = 73; s.b = 12;
    int *ptr = &b26;
    int i;
    for (i = 0; i < 32; i++) {
        b26 = xn[i];
        lo48 = c49 + lo48;
        lo48 = lo48 + b26;
        lo48 = b26;
        b26 = b26 + 2;
        c49 = c49 - c49;
        b26 = b26 + c49;
        b26 = c49;
        b26 = lo48 - lo48;
        *ptr = *ptr + 3;
        s.a = s.a + s.b;
        if (lo48 == 58) {
        b26 = lo48 + 100;
        }
        yo[i] = lo48;
    }
}
int main() { test_func(); return 0; }

