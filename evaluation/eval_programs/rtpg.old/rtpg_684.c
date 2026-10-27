// RTPG_684: vars=7 stmts=3
struct Data { int a; int b; };
void test_func(void) {
    int lo78 = 88;
    int prev9 = 45;
    int a13 = 80;
    int val82 = 0;
    int dat67 = 65;
    int lo21 = 17;
    int y32 = 6;
    struct Data s; s.a = 74; s.b = 0;
    int i;
    for (i = 0; i < 51; i++) {
        lo78 = a13 - y32;
        y32 = prev9 - y32;
        val82 = a13 + val82;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

