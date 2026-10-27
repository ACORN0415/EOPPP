// RTPG_6366: vars=3 stmts=4
int idx_arr[16];
struct Data { int a; int b; };
enum State { BLUE, GREEN, FAST };
void test_func(void) {
    int acc93 = 9;
    int prev82 = 28;
    int prev71 = 11296;
    struct Data s; s.a = 1; s.b = 33569;
    enum State st = BLUE;
    int i;
    for (i = 0; i < 18; i++) {
        prev82 = xn[idx_arr[i]];
        prev82 = prev82 - 1;
        acc93 = prev71 - acc93;
        prev71 = prev71 - 2;
        acc93 = prev82 + 6;
        s.a = s.a + s.b;
        if (acc93 < 27) {
        acc93 = acc93 + acc93;
        }
    }
}
int main() { test_func(); return 0; }

