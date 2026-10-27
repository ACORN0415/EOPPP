// RTPG_8938: vars=4 stmts=4
int idx_arr[16];
struct Point { int a; int b; };
void test_func(void) {
    int res62 = 25;
    int x12 = 34862;
    int b15 = 1;
    int val65 = -21;
    struct Point s; s.a = 4; s.b = -36;
    int i;
    for (i = 0; i < 15; i++) {
        b15 = xn[idx_arr[i]];
        x12 = res62 + 3;
        x12 = val65;
        x12 = res62 + 4;
        x12 = x12 + 5;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

