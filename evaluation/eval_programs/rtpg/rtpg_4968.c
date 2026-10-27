// RTPG_4968: vars=5 stmts=5
struct Data { int a; int b; };
void test_func(void) {
    int tmp99 = 6;
    int b98 = 18;
    int cur30 = -15;
    int val57 = 17684;
    int lo33 = 7;
    struct Data s; s.a = 7; s.b = 13938;
    int i;
    for (i = 0; i < 25; i++) {
        tmp99 = b98;
        tmp99 = tmp99 + val57;
        tmp99 = tmp99;
        b98 = cur30 - b98;
        b98 = cur30 + val57;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

