// RTPG_844: vars=5 stmts=6
int xn[16];
int yo[16];
struct Point { int a; int b; };
void test_func(void) {
    int tmp28 = 96;
    int res23 = 34052;
    int val35 = 32;
    int c80 = -30;
    int b91 = 1;
    struct Point s; s.a = 70; s.b = 35867;
    int i;
    for (i = 0; i < 15; i++) {
        int j;
        for (j = 0; j < 19; j++) {
        res23 = res23 - 5;
        val35 = res23 - -2;
        res23 = tmp28 + c80;
        c80 = c80 - 5;
        res23 = res23 - 26362;
        val35 = c80;
        }
    }
}
int main() { test_func(); return 0; }

