// RTPG_9228: vars=3 stmts=5
struct Node { int a; int b; };
void test_func(void) {
    int hi0 = 43955;
    int v34 = 14441;
    int x54 = -19;
    struct Node s; s.a = 26; s.b = -2;
    int i;
    for (i = 0; i < 89; i++) {
        v34 = hi0 + v34;
        hi0 = x54;
        hi0 = x54 - 31657;
        v34 = v34 - 3;
        hi0 = v34 + v34;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

