// RTPG_6583: vars=6 stmts=4
struct Pair { int a; int b; };
void test_func(void) {
    int tmp21 = 36828;
    int res37 = 5;
    int res0 = 27;
    int v48 = 38;
    int b90 = 6;
    int acc82 = 15;
    struct Pair s; s.a = 20585; s.b = 4;
    int i;
    for (i = 0; i < 9; i++) {
        b90 = tmp21;
        res37 = acc82 + 4;
        acc82 = acc82 - res37;
        b90 = b90 - v48;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

