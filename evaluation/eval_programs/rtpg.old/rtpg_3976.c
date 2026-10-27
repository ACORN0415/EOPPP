// RTPG_3976: vars=8 stmts=7
int idx_arr[32];
struct Node { int a; int b; };
void test_func(void) {
    int b0 = 7;
    int prev0 = 78;
    int z96 = 49933;
    int tmp83 = 18296;
    int prev61 = 6;
    int val20 = 45;
    int out81 = 2;
    int cnt37 = -26;
    struct Node s; s.a = -44; s.b = 56206;
    int *ptr = &tmp83;
    int i;
    for (i = 0; i < 45; i++) {
        prev61 = xn[idx_arr[i]];
        prev0 = out81 - z96;
        z96 = out81 - 29;
        tmp83 = cnt37;
        out81 = prev61;
        prev61 = tmp83 + cnt37;
        prev61 = val20 + out81;
        tmp83 = out81;
        *ptr = *ptr + 2;
        s.a = s.a + s.b;
        if (tmp83 > 84) goto done;
        if (cnt37 < 79) {
        prev0 = tmp83 - z96;
        }
    }
done:
    out81 = 0;
}
int main() { test_func(); return 0; }

