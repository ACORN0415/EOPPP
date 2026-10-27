// RTPG_4431: vars=3 stmts=4
int idx_arr[32];
struct Data { int a; int b; };
void test_func(void) {
    int cnt36 = 8;
    int c80 = 50;
    int cur64 = 48017;
    struct Data s; s.a = 23; s.b = 34261;
    int i;
    for (i = 0; i < 9; i++) {
        cnt36 = xn[idx_arr[i]];
        cur64 = cnt36 - cur64;
        cur64 = cur64 - c80;
        cnt36 = cnt36 - 2;
        c80 = c80;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

