// RTPG_6247: vars=6 stmts=7
int idx_arr[16];
struct Node { int a; int b; };
void test_func(void) {
    int prev96 = 4;
    int z4 = 5;
    int lo44 = 38;
    int res10 = 36;
    int acc45 = 2;
    int prev4 = -46;
    struct Node s; s.a = 7; s.b = 1;
    int *ptr = &res10;
    int h0 = 0;
    int sv0 = 0;
    int h1 = 4;
    int sv1 = 0;
    int i;
    for (i = 0; i < 24; i++) {
        acc45 = xn[idx_arr[i]];
        prev96 = acc45;
        lo44 = acc45 * 18749;
        prev96 = acc45 + acc45;
        prev4 = res10 - prev96;
        prev96 = prev4 - 41;
        z4 = z4;
        acc45 = prev4 + prev4;
        *ptr = *ptr + 2;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

