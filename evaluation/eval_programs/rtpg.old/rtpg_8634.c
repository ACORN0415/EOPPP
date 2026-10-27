// RTPG_8634: vars=3 stmts=4
int idx_arr[64];
struct Point { int a; int b; };
void test_func(void) {
    int y4 = 32;
    int dat75 = 29709;
    int lo59 = 0;
    struct Point s; s.a = 4; s.b = 8;
    int i;
    for (i = 0; i < 13; i++) {
        lo59 = xn[idx_arr[i]];
        lo59 = y4 + lo59;
        lo59 = lo59 + y4;
        y4 = y4 + 35615;
        dat75 = dat75 + 1;
        s.a = s.a + s.b;
        if (dat75 >= 10) {
        dat75 = dat75 + dat75;
        }
    }
}
int main() { test_func(); return 0; }

