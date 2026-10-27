// RTPG_5518: vars=10 stmts=2
int xn[32];
int yo[32];
struct Point { int a; int b; };
void test_func(void) {
    int lo76 = 36;
    int c29 = 9;
    int a92 = 1;
    int z50 = 6;
    int acc69 = 7;
    int sum71 = 18663;
    int hi68 = -24;
    int x16 = 42003;
    int cnt22 = 6;
    int c66 = 75;
    struct Point s; s.a = 7; s.b = 9;
    int i;
    for (i = 0; i < 65; i++) {
        switch (cnt22) {
            case 0: c66 = 49; break;
            case 1: a92 = 39; break;
            default: break;
        }
        cnt22 = cnt22 + 1;
    }
}
int main() { test_func(); return 0; }

