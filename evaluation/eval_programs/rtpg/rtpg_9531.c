// RTPG_9531: vars=4 stmts=4
struct Data { int a; int b; };
void test_func(void) {
    int sum17 = 39;
    int res35 = 5084;
    int hi17 = -45;
    int sum4 = 50;
    struct Data s; s.a = 22; s.b = 29;
    int i;
    for (i = 0; i < 73; i++) {
        sum17 = sum4 + hi17;
        sum4 = sum4 + 2;
        hi17 = sum4 - res35;
        res35 = res35 + 3;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

