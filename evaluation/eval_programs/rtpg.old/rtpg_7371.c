// RTPG_7371: vars=4 stmts=3
void test_func(void) {
    int cnt54 = 0;
    int sum85 = 88;
    int val60 = 70;
    int hi54 = 82;
    int i;
    for (i = 0; i < 5; i++) {
        hi54 = sum85 + 34327;
        val60 = cnt54;
        hi54 = cnt54 & cnt54;
    }
}
int main() { test_func(); return 0; }

