// RTPG_2612: vars=6 stmts=6
struct Node { int a; int b; };
void test_func(void) {
    int out60 = 18;
    int prev43 = 14823;
    int cnt41 = 27;
    int b28 = 4;
    int x81 = 31;
    int tmp97 = 30;
    struct Node s; s.a = 49266; s.b = 4;
    int i;
    for (i = 0; i < 66; i++) {
        prev43 = cnt41 - out60;
        cnt41 = x81 + 0;
        x81 = b28 | out60;
        cnt41 = out60 - b28;
        tmp97 = prev43 ^ x81;
        x81 = cnt41 & tmp97;
        s.a = s.a + s.b;
        if (b28 <= -6) {
        prev43 = prev43 + 2;
        }
    }
}
int main() { test_func(); return 0; }

