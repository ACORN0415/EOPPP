// RTPG_1000: vars=4 stmts=11
struct Pair { int a; int b; };
void test_func(void) {
    int sum11 = -50;
    int cnt56 = 10;
    int a48 = 60961;
    int tmp71 = 10523;
    struct Pair s; s.a = 9; s.b = 3;
    int i;
    for (i = 0; i < 49; i++) {
        cnt56 = cnt56 + -23;
        a48 = cnt56 - sum11;
        sum11 = tmp71;
        a48 = a48 - 4;
        cnt56 = cnt56 + 6;
        cnt56 = cnt56 - 1;
        a48 = a48 + 1;
        cnt56 = a48 + tmp71;
        a48 = sum11 + a48;
        a48 = tmp71;
        cnt56 = a48;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

