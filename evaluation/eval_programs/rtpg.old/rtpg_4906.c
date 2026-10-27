// RTPG_4906: vars=5 stmts=5
struct Data { int a; int b; };
void test_func(void) {
    int cur30 = 6;
    int val57 = 18;
    int lo33 = -15;
    int b98 = 17684;
    int tmp99 = 7;
    struct Data s; s.a = 7; s.b = 13938;
    int i;
    for (i = 0; i < 25; i++) {
        cur30 = val57;
        cur30 = cur30 + b98;
        cur30 = cur30;
        val57 = lo33 - val57;
        val57 = lo33 + b98;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

