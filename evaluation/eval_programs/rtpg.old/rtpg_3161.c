// RTPG_3161: vars=6 stmts=10
struct Pair { int a; int b; };
void test_func(void) {
    int dat78 = 64;
    int res48 = 0;
    int acc74 = 4;
    int b91 = 32;
    int dat25 = 4;
    int a90 = 61;
    struct Pair s; s.a = 77; s.b = 8;
    int i;
    for (i = 0; i < 43; i++) {
        dat78 = dat78;
        a90 = acc74 - -25;
        b91 = b91 + res48;
        res48 = dat78 + dat25;
        acc74 = dat78 + -21;
        acc74 = b91;
        b91 = b91 + 4;
        acc74 = b91 - 8;
        a90 = a90 - 4;
        a90 = a90 + res48;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

