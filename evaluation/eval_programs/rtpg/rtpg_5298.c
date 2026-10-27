// RTPG_5298: vars=10 stmts=5
int xn[32];
int yo[32];
void test_func(void) {
    int val40 = 44653;
    int sum98 = 20532;
    int sum91 = 3;
    int tmp79 = 43000;
    int prev71 = 90;
    int y25 = 7;
    int val18 = 93;
    int lo41 = 32497;
    int res37 = 24;
    int c40 = 21079;
    int i;
    for (i = 0; i < 32; i++) {
        prev71 = xn[i];
        res37 = prev71 + sum98;
        y25 = y25 - 1;
        val18 = val18 + 5;
        prev71 = val18 + 4;
        tmp79 = c40 - 9;
        yo[i] = res37;
    }
}
int main() { test_func(); return 0; }

