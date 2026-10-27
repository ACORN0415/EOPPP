// RTPG_5186: vars=7 stmts=4
int xn[16];
int yo[16];
int idx_arr[16];
struct Point { int a; int b; };
enum State { OFF, BLUE, ON };
void test_func(void) {
    int val63 = -41;
    int a18 = 20;
    int out18 = 34;
    int dat9 = 29444;
    int cur53 = 4;
    int hi52 = 40;
    int cnt13 = 7;
    struct Point s; s.a = 10; s.b = 31664;
    enum State st = OFF;
    int h0 = 8755;
    int sv0 = 0;
    int h1 = 28;
    int sv1 = 0;
    int h2 = 53;
    int sv2 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        cur53 = xn[i];
        val63 = xn[idx_arr[i]];
        a18 = a18 - 8;
        cnt13 = a18 * -29;
        val63 = dat9 * 85;
        a18 = cnt13;
        s.a = s.a + s.b;
        yo[i] = hi52;
    }
}
int main() { test_func(); return 0; }

