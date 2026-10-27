// RTPG_980: vars=5 stmts=8
int idx_arr[32];
struct Data { int a; int b; };
void test_func(void) {
    int b8 = 20;
    int res19 = 1;
    int b91 = -33;
    int a59 = -28;
    int prev15 = 28650;
    struct Data s; s.a = 46; s.b = 13;
    int i;
    for (i = 0; i < 60; i++) {
        b8 = xn[idx_arr[i]];
        prev15 = b8 - prev15;
        a59 = a59 + 1;
        res19 = b91 - 54;
        b8 = res19 - res19;
        b8 = a59 + b8;
        b91 = a59 + res19;
        a59 = b8 + 7564;
        b8 = prev15;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

