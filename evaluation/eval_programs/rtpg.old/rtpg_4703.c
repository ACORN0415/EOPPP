// RTPG_4703: vars=5 stmts=3
struct Pair { int a; int b; };
void test_func(void) {
    int a9 = 6;
    int b79 = 1;
    int lo56 = 24120;
    int dat17 = 7;
    int acc84 = 0;
    struct Pair s; s.a = 1; s.b = 48412;
    int i;
    for (i = 0; i < 75; i++) {
        b79 = dat17 + -29;
        lo56 = b79 / dat17;
        dat17 = dat17 - 2;
        s.a = s.a + s.b;
        if (lo56 != 75) {
        dat17 = dat17 - 4;
        }
    }
}
int main() { test_func(); return 0; }

