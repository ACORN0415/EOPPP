// RTPG_2464: vars=10 stmts=6
int idx_arr[16];
struct Point { int a; int b; };
void test_func(void) {
    int sum14 = -47;
    int lo1 = 0;
    int acc12 = 42;
    int v35 = 36;
    int b70 = 12;
    int y29 = 29536;
    int lo90 = 70;
    int b43 = -1;
    int v31 = 22582;
    int tmp18 = 6;
    struct Point s; s.a = 1; s.b = 48;
    int i;
    for (i = 0; i < 64; i++) {
        v35 = xn[idx_arr[i]];
        tmp18 = y29 + 8;
        v31 = v31 - 2;
        lo1 = v35 - lo1;
        sum14 = sum14 & sum14;
        sum14 = y29;
        v35 = sum14 / v31;
        s.a = s.a + s.b;
    }
done:
    lo90 = 0;
}
int main() { test_func(); return 0; }

