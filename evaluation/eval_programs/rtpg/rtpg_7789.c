// RTPG_7789: vars=7 stmts=8
struct Data { int a; int b; };
void test_func(void) {
    int cur20 = 1;
    int lo50 = 10;
    double cnt3 = 65.89;
    int x54 = 9744;
    double z38 = 98.90;
    int out51 = 5;
    int lo2 = -25;
    struct Data s; s.a = 17; s.b = 34362;
    int i;
    for (i = 0; i < 17; i++) {
        lo50 = lo2;
        x54 = x54 - 5;
        out51 = cnt3 + cnt3;
        out51 = x54 & cur20;
        cnt3 = cur20 - z38;
        x54 = x54 % lo2;
        z38 = out51 - cnt3;
        z38 = cur20 ^ lo2;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

