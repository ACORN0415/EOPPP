// RTPG_864: vars=3 stmts=4
int xn[64];
int yo[64];
struct Point { int a; int b; };
void test_func(void) {
    int a59 = 50;
    int sum59 = 96;
    int res50 = 56;
    struct Point s; s.a = 43; s.b = 11613;
    int i;
    for (i = 0; i < 31; i++) {
        int j;
        for (j = 0; j < 10; j++) {
        a59 = a59 + 1;
        sum59 = sum59 + 4;
        sum59 = res50;
        res50 = sum59 - 6;
        }
    }
}
int main() { test_func(); return 0; }

