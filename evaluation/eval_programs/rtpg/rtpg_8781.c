// RTPG_8781: vars=8 stmts=9
struct Node { int a; int b; };
enum State { BLUE, SLOW, OFF };
void test_func(void) {
    int a10 = 20;
    int cnt32 = 6;
    int cnt64 = 21;
    int acc74 = -10;
    int cur73 = -35;
    int lo81 = 4;
    int sum95 = 9;
    int y56 = 0;
    struct Node s; s.a = 25537; s.b = 63957;
    enum State st = BLUE;
    int i;
    for (i = 0; i < 10; i++) {
        a10 = sum95 - lo81;
        cnt32 = a10 + cnt32;
        sum95 = sum95 + 5;
        lo81 = y56 - y56;
        a10 = cnt64 - cnt32;
        cnt64 = y56;
        cur73 = cur73;
        acc74 = cnt32 - sum95;
        cnt64 = cnt32 + acc74;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

