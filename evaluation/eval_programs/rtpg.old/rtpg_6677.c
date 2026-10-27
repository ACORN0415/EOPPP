// RTPG_6677: vars=5 stmts=7
int idx_arr[16];
struct Data { int a; int b; };
void test_func(void) {
    int a67 = 40263;
    int b84 = 35;
    int z26 = 24;
    int val93 = 1;
    int res95 = 5;
    struct Data s; s.a = -49; s.b = 43;
    int i;
    for (i = 0; i < 99; i++) {
        val93 = xn[idx_arr[i]];
        res95 = b84 - val93;
        val93 = b84;
        res95 = val93 + z26;
        a67 = val93;
        a67 = res95;
        a67 = a67 + 3;
        res95 = z26 - 5239;
        s.a = s.a + s.b;
    }
done:
    a67 = 0;
}
int main() { test_func(); return 0; }

