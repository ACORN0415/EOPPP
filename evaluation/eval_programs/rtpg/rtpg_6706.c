// RTPG_6706: vars=5 stmts=4
void test_func(void) {
    int x48 = 4;
    int prev38 = -19;
    int acc53 = 54633;
    int lo91 = -42;
    int val86 = 9;
    int i;
    for (i = 0; i < 73; i++) {
        prev38 = prev38 + val86;
        acc53 = x48;
        acc53 = acc53 + 1;
        x48 = prev38;
    }
}
int main() { test_func(); return 0; }

