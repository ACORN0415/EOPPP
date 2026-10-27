// RTPG_8137: vars=6 stmts=5
struct Node { int a; int b; };
void test_func(void) {
    int dat32 = 7;
    int b97 = -45;
    int c29 = 0;
    int sum84 = 16;
    int tmp86 = 1;
    int x30 = 7;
    struct Node s; s.a = 29010; s.b = 48;
    int i;
    for (i = 0; i < 30; i++) {
        x30 = x30;
        c29 = sum84 - dat32;
        sum84 = sum84 - 2;
        c29 = sum84;
        c29 = sum84;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

