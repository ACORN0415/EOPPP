// RTPG_1159: vars=8 stmts=3
int idx_arr[32];
struct Data { int a; int b; };
void test_func(void) {
    int b21 = 8;
    int val29 = 61848;
    int c5 = 3440;
    int res95 = 90;
    int val78 = -22;
    int out63 = 38;
    int sum50 = 2;
    int lo20 = 70;
    struct Data s; s.a = 4; s.b = -2;
    int i;
    for (i = 0; i < 39; i++) {
        lo20 = xn[idx_arr[i]];
        c5 = val29 + b21;
        sum50 = lo20 - b21;
        out63 = val78 + sum50;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

