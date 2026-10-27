// RTPG_5383: vars=8 stmts=4
struct Node { int a; int b; };
void test_func(void) {
    int tmp89 = 12;
    int sum21 = 81;
    int tmp40 = 27721;
    int cnt8 = 90;
    int sum58 = 59489;
    int val3 = 7;
    int a84 = -28;
    int y49 = 0;
    struct Node s; s.a = 27199; s.b = 42;
    int i;
    for (i = 0; i < 8; i++) {
        sum58 = a84;
        sum58 = sum58 - 2;
        sum21 = sum21 - 1;
        a84 = sum58 + 95;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

