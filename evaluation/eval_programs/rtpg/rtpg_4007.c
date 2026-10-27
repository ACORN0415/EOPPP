// RTPG_4007: vars=8 stmts=7
int idx_arr[32];
struct Node { int a; int b; };
void test_func(void) {
    int prev61 = 7;
    int prev0 = 78;
    int val20 = 49933;
    int b0 = 18296;
    int z96 = 6;
    int cnt37 = 45;
    int tmp83 = 2;
    int out81 = -26;
    struct Node s; s.a = -44; s.b = 56206;
    int *ptr = &b0;
    int i;
    for (i = 0; i < 45; i++) {
        z96 = xn[idx_arr[i]];
        prev0 = tmp83 - val20;
        val20 = tmp83 - 29;
        b0 = out81;
        tmp83 = z96;
        z96 = b0 + out81;
        z96 = cnt37 + tmp83;
        b0 = tmp83;
        *ptr = *ptr + 2;
        s.a = s.a + s.b;
        if (b0 > 84) goto done;
        if (out81 < 79) {
        prev0 = b0 - val20;
        }
    }
done:
    tmp83 = 0;
}
int main() { test_func(); return 0; }

