// RTPG_2574: vars=10 stmts=3
struct Data { int a; int b; };
void test_func(void) {
    int x20 = 46834;
    int acc56 = 4;
    int tmp30 = 18835;
    int res5 = -28;
    int prev8 = 30;
    int res87 = 31;
    int y79 = 11793;
    int sum50 = 14525;
    int sum16 = 46200;
    int cnt68 = 2;
    struct Data s; s.a = 7; s.b = 0;
    int i;
    for (i = 0; i < 5; i++) {
        sum50 = sum50 ^ prev8;
        sum16 = y79 + res5;
        res5 = prev8;
        s.a = s.a + s.b;
        if (cnt68 == 11) {
        sum50 = sum50 - 1;
        }
    }
}
int main() { test_func(); return 0; }

