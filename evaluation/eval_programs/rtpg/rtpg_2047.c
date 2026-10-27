// RTPG_2047: vars=3 stmts=5
void test_func(void) {
    int a19 = 56;
    int cnt32 = 5;
    int dat98 = 3;
    int i;
    for (i = 0; i < 47; i++) {
        cnt32 = cnt32 - 2;
        cnt32 = cnt32 + 5;
        cnt32 = a19 + cnt32;
        a19 = a19 - 2;
        a19 = cnt32 - a19;
    }
}
int main() { test_func(); return 0; }

