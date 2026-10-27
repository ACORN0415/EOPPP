// RTPG_6681: vars=8 stmts=12
int idx_arr[16];
struct Point { int a; int b; };
void test_func(void) {
    int lo23 = 37168;
    int dat63 = 45711;
    int cur83 = -48;
    int acc74 = -11;
    int v80 = 8;
    int v34 = 10;
    int tmp57 = 34173;
    int x88 = 5065;
    struct Point s; s.a = 48; s.b = -48;
    int h0 = 49085;
    int sv0 = 0;
    int h1 = 16;
    int sv1 = 0;
    int i;
    for (i = 0; i < 9; i++) {
        v34 = xn[idx_arr[i]];
        x88 = lo23 + v34;
        v34 = acc74 + 52969;
        dat63 = acc74 + v80;
        acc74 = v34 + lo23;
        v34 = tmp57;
        v34 = v80;
        v34 = lo23 * 22137;
        acc74 = acc74 + -40;
        lo23 = tmp57;
        v80 = lo23 + v34;
        tmp57 = x88;
        acc74 = v34;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

