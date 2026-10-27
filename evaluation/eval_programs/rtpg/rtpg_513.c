// RTPG_513: vars=3 stmts=9
void test_func(void) {
    int x57 = 6;
    int prev45 = 99;
    int hi73 = 44;
    int i;
    for (i = 0; i < 20; i++) {
        hi73 = hi73 - 4;
        prev45 = prev45 - 1;
        hi73 = x57 ^ hi73;
        prev45 = hi73 + prev45;
        hi73 = prev45 | x57;
        prev45 = hi73 + x57;
        prev45 = prev45 + x57;
        hi73 = hi73 + prev45;
        prev45 = hi73 ^ x57;
    }
}
int main() { test_func(); return 0; }

