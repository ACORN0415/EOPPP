// RTPG_3912: vars=4 stmts=6
void test_func(void) {
    int prev50 = 10;
    int hi71 = 49877;
    int x86 = 26481;
    int x88 = 9982;
    int i;
    for (i = 0; i < 96; i++) {
        x86 = x88 - x86;
        hi71 = hi71 + 13;
        x86 = x86 - 2;
        prev50 = prev50 + 1;
        x86 = hi71;
        hi71 = x86 + prev50;
    }
}
int main() { test_func(); return 0; }

