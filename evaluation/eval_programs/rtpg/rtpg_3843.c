// RTPG_3843: vars=5 stmts=11
struct Pair { int a; int b; };
void test_func(void) {
    float tmp75 = 58.70;
    double lo38 = 28.06;
    int cnt41 = 9148;
    float v38 = 97.43;
    int a30 = -17;
    struct Pair s; s.a = 30; s.b = 70;
    int i;
    for (i = 0; i < 47; i++) {
        lo38 = lo38 - a30;
        a30 = v38 + cnt41;
        a30 = lo38 + 100;
        a30 = tmp75;
        a30 = a30 - 1;
        cnt41 = tmp75 - lo38;
        cnt41 = lo38 + v38;
        a30 = tmp75 - lo38;
        tmp75 = tmp75 + 4;
        lo38 = v38 + 26;
        v38 = tmp75 - 15;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

