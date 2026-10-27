// RTPG_9157: vars=5 stmts=3
struct Point { int a; int b; };
void test_func(void) {
    int out69 = 9;
    int lo32 = 9;
    int hi82 = 846;
    int cur49 = 28;
    int x40 = 5;
    struct Point s; s.a = -37; s.b = 0;
    int i;
    for (i = 0; i < 94; i++) {
        lo32 = out69 + 8;
        out69 = cur49 - 81;
        lo32 = hi82;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

