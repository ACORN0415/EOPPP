// RTPG_2070: vars=3 stmts=10
void test_func(void) {
    int res4 = 14587;
    int res92 = 48;
    int prev14 = -24;
    int *ptr = &res4;
    int i;
    for (i = 0; i < 19; i++) {
        res4 = res4 + prev14;
        prev14 = prev14 + 2;
        res4 = prev14 + res92;
        res92 = prev14;
        res4 = res92 - res4;
        prev14 = prev14 + res92;
        prev14 = res92 + 74;
        res4 = res4 | res4;
        res4 = res4 - prev14;
        prev14 = res4;
        *ptr = *ptr + 2;
        if (prev14 != 94) {
        res4 = prev14 + 35877;
        }
    }
}
int main() { test_func(); return 0; }

