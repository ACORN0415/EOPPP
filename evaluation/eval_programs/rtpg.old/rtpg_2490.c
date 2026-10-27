// RTPG_2490: vars=3 stmts=8
void test_func(void) {
    int prev74 = 64724;
    int c23 = 22452;
    int c99 = 37;
    int i;
    for (i = 0; i < 21; i++) {
        c23 = c99 ^ c23;
        prev74 = prev74 - 4;
        c23 = c23 + c23;
        c99 = c99 + 4;
        c23 = c23 - prev74;
        c23 = c23 + 3;
        c99 = c99;
        prev74 = c99 | c99;
    }
}
int main() { test_func(); return 0; }

