// RTPG_8491: vars=3 stmts=4
struct Node { int a; int b; };
enum State { OFF, RED, ON };
void test_func(void) {
    int tmp76 = 3;
    int lo47 = 10;
    int a53 = 14540;
    struct Node s; s.a = 81; s.b = 93;
    enum State st = OFF;
    int i;
    for (i = 0; i < 56; i++) {
        lo47 = a53 - tmp76;
        a53 = tmp76;
        tmp76 = lo47 - a53;
        tmp76 = tmp76 + a53;
        s.a = s.a + s.b;
        if (tmp76 >= 64) {
        a53 = lo47 - tmp76;
        }
    }
}
int main() { test_func(); return 0; }

