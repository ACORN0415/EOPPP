// RTPG_2727: vars=5 stmts=7
struct Node { int a; int b; };
enum State { FAST, ON, GREEN };
void test_func(void) {
    int val40 = 88;
    int hi60 = 17818;
    int hi95 = -34;
    int out39 = 49;
    int prev63 = 3;
    struct Node s; s.a = 72; s.b = 29;
    enum State st = FAST;
    int i;
    for (i = 0; i < 11; i++) {
        out39 = out39 - 2;
        prev63 = hi60;
        prev63 = hi95 - prev63;
        hi95 = val40 + out39;
        val40 = hi95 - out39;
        hi95 = hi95 + 2;
        hi60 = hi60 - 35;
        s.a = s.a + s.b;
        if (prev63 <= -31) {
        out39 = out39 + 2;
        }
    }
}
int main() { test_func(); return 0; }

