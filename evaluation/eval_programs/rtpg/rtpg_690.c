// RTPG_690: vars=3 stmts=12
void test_func(void) {
    int cnt80 = 13;
    int hi83 = 26085;
    int sum67 = 6;
    int i;
    for (i = 0; i < 94; i++) {
        int j;
        for (j = 0; j < 8; j++) {
        sum67 = cnt80 + hi83;
        sum67 = sum67;
        sum67 = cnt80 + hi83;
        sum67 = sum67 - hi83;
        cnt80 = hi83 + sum67;
        cnt80 = hi83 + sum67;
        cnt80 = cnt80 + 3;
        sum67 = hi83 - 92;
        sum67 = cnt80 - hi83;
        cnt80 = cnt80;
        hi83 = hi83 - cnt80;
        sum67 = cnt80;
        }
    }
}
int main() { test_func(); return 0; }

