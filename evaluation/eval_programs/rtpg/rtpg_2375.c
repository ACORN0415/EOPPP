// RTPG_2375: vars=4 stmts=3
void test_func(void) {
    int val90 = -2;
    int prev54 = 4;
    int res32 = 40;
    int y83 = 6;
    int i;
    for (i = 0; i < 10; i++) {
        prev54 = y83 / val90;
        prev54 = val90 % res32;
        y83 = y83 + res32;
    }
}
int main() { test_func(); return 0; }

