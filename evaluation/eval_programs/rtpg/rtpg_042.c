// RTPG_42: vars=5 stmts=6
struct Node { int a; int b; };
void test_func(void) {
    int acc7 = 10957;
    int res28 = 35;
    int v74 = 78;
    int cur11 = 92;
    int tmp57 = 2;
    struct Node s; s.a = -11; s.b = 54;
    int i;
    for (i = 0; i < 65; i++) {
        res28 = cur11 + res28;
        res28 = v74 - 8;
        acc7 = v74 + cur11;
        tmp57 = tmp57 + res28;
        res28 = v74 + cur11;
        v74 = v74 - 4;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

