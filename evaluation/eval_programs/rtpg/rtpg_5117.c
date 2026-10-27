// RTPG_5117: vars=5 stmts=9
struct Point { int a; int b; };
void test_func(void) {
    int x77 = 24851;
    int lo85 = 87;
    double cnt75 = 2.05;
    int sum30 = 26787;
    int acc60 = 86;
    struct Point s; s.a = 3; s.b = -25;
    int i;
    for (i = 0; i < 72; i++) {
        lo85 = sum30 - cnt75;
        x77 = cnt75 - acc60;
        sum30 = lo85 + sum30;
        cnt75 = x77 + acc60;
        lo85 = x77 - lo85;
        lo85 = cnt75 + sum30;
        sum30 = lo85 - cnt75;
        x77 = lo85 - acc60;
        cnt75 = x77 - sum30;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

