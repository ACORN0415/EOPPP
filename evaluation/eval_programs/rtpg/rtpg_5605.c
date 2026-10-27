// RTPG_5605: vars=10 stmts=2
int xn[32];
int yo[32];
struct Point { int a; int b; };
void test_func(void) {
    int hi68 = 36;
    int c66 = 9;
    int lo76 = 1;
    int acc69 = 6;
    int a92 = 7;
    int x16 = 18663;
    int cnt22 = -24;
    int sum71 = 42003;
    int c29 = 6;
    int z50 = 75;
    struct Point s; s.a = 7; s.b = 9;
    int i;
    for (i = 0; i < 65; i++) {
        switch (c29) {
            case 0: z50 = 49; break;
            case 1: lo76 = 39; break;
            default: break;
        }
        c29 = c29 + 1;
    }
}
int main() { test_func(); return 0; }

