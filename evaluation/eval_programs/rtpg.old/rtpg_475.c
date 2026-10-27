// RTPG_475: vars=7 stmts=7
struct Data { int a; int b; };
void test_func(void) {
    int cnt1 = 31415;
    int prev57 = -13;
    int val23 = 28;
    int cur98 = 33001;
    int x96 = 50759;
    int dat29 = 8;
    int dat70 = 88;
    struct Data s; s.a = 17; s.b = 34;
    int i;
    for (i = 0; i < 63; i++) {
        x96 = x96 - val23;
        val23 = val23 + 1;
        dat29 = dat29 + 1;
        dat70 = val23 - cur98;
        dat70 = dat70 - 5;
        dat29 = dat70;
        cur98 = x96 - dat70;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

