// RTPG_2529: vars=7 stmts=2
int xn[16];
int yo[16];
struct Point { int a; int b; };
void test_func(void) {
    int cur96 = 90;
    int hi61 = 7;
    int a25 = 41089;
    int acc89 = 56978;
    int prev48 = -45;
    int c32 = 4;
    int dat43 = 79;
    struct Point s; s.a = 36; s.b = 15;
    int i;
    for (i = 0; i < 16; i++) {
        dat43 = xn[i];
        dat43 = dat43 - 2;
        dat43 = prev48 - hi61;
        s.a = s.a + s.b;
        if (a25 <= 10) {
        prev48 = hi61;
        }
        yo[i] = a25;
    }
}
int main() { test_func(); return 0; }

