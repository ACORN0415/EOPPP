// RTPG_7570: vars=11 stmts=7
struct Point { int a; int b; };
void test_func(void) {
    int acc50 = 46;
    int cur40 = 25;
    double x18 = 56.65;
    int acc2 = 10;
    float b32 = 14.78;
    int acc59 = -3;
    int cnt82 = 9;
    int cur61 = -33;
    int c76 = 26972;
    int acc58 = 32;
    int lo20 = 28427;
    struct Point s; s.a = 1; s.b = 1;
    int i;
    for (i = 0; i < 43; i++) {
        acc2 = cur61 + acc59;
        acc50 = cur40;
        cur61 = acc59;
        lo20 = b32 + x18;
        c76 = acc59 + 5;
        acc58 = lo20 + acc59;
        cur40 = x18 - lo20;
        s.a = s.a + s.b;
        if (c76 < 74) {
        acc50 = c76 - acc59;
        }
    }
}
int main() { test_func(); return 0; }

