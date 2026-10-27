// RTPG_8052: vars=4 stmts=2
void test_func(void) {
    int v17 = 74;
    int y48 = 42;
    int z88 = 72;
    int a79 = 1;
    int i;
    for (i = 0; i < 8; i++) {
        a79 = v17 ^ v17;
        v17 = v17 - 2;
        if (v17 != 10) {
        z88 = a79;
        }
    }
}
int main() { test_func(); return 0; }

