// RTPG_7854: vars=3 stmts=7
struct Pair { int a; int b; };
void test_func(void) {
    int y81 = -41;
    int v87 = 5905;
    int x45 = 12;
    struct Pair s; s.a = 15877; s.b = 9;
    int i;
    for (i = 0; i < 12; i++) {
        y81 = v87 - x45;
        v87 = v87 + 2;
        x45 = y81;
        v87 = v87 + 2;
        x45 = v87 + x45;
        y81 = x45;
        x45 = x45 - 3;
        s.a = s.a + s.b;
        if (y81 < 10) {
        v87 = y81;
        }
    }
}
int main() { test_func(); return 0; }

