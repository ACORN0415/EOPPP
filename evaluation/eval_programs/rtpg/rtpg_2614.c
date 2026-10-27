// RTPG_2614: vars=5 stmts=6
struct Node { int a; int b; };
void test_func(void) {
    int cur18 = 7;
    int y71 = 6;
    int dat1 = 6;
    int acc12 = 9;
    int a55 = 60;
    struct Node s; s.a = 8; s.b = 2;
    int i;
    for (i = 0; i < 25; i++) {
        a55 = a55 + 2;
        y71 = a55 - cur18;
        a55 = dat1 - 8;
        cur18 = cur18;
        cur18 = y71 + acc12;
        cur18 = cur18;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

