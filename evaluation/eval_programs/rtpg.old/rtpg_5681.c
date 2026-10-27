// RTPG_5681: vars=6 stmts=5
struct Node { int a; int b; };
void test_func(void) {
    int cur40 = 7652;
    int hi16 = 7;
    int dat12 = 50;
    int out22 = 94;
    int lo24 = -29;
    int res73 = 70;
    struct Node s; s.a = 18984; s.b = -44;
    int i;
    for (i = 0; i < 10; i++) {
        hi16 = lo24 - 10;
        cur40 = cur40 + 1;
        cur40 = lo24 - 22583;
        hi16 = hi16 - 3;
        dat12 = hi16 + cur40;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

