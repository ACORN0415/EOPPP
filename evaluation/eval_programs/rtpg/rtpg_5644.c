// RTPG_5644: vars=7 stmts=9
int xn[64];
int yo[64];
int idx_arr[64];
struct Point { int a; int b; };
void test_func(void) {
    int x7 = 38;
    int dat91 = 8;
    int x18 = 3728;
    int tmp36 = 60779;
    int y25 = -12;
    int lo65 = 41749;
    int v72 = 49;
    struct Point s; s.a = 16678; s.b = 0;
    int i;
    for (i = 0; i < 64; i++) {
        lo65 = xn[i];
        x7 = xn[idx_arr[i]];
        v72 = dat91 - lo65;
        dat91 = x7 + 33057;
        y25 = y25 - x7;
        lo65 = tmp36;
        y25 = y25 - 2;
        x18 = v72 - y25;
        x18 = lo65 - x18;
        tmp36 = lo65 + x18;
        dat91 = dat91 - 3;
        s.a = s.a + s.b;
        yo[i] = v72;
    }
}
int main() { test_func(); return 0; }

