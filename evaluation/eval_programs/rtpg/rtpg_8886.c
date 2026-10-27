// RTPG_8886: vars=3 stmts=5
void test_func(void) {
    int tmp73 = 48416;
    int x86 = 4;
    int tmp17 = 3;
    int i;
    for (i = 0; i < 64; i++) {
        x86 = tmp73;
        x86 = x86;
        tmp17 = x86 + 32;
        tmp73 = tmp17 - tmp73;
        tmp17 = tmp17;
        if (x86 == 66) {
        x86 = tmp17 + 19400;
        }
    }
}
int main() { test_func(); return 0; }

