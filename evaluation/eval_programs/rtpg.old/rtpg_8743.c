// RTPG_8743: vars=3 stmts=5
void test_func(void) {
    int x86 = 48416;
    int tmp73 = 4;
    int tmp17 = 3;
    int i;
    for (i = 0; i < 64; i++) {
        tmp73 = x86;
        tmp73 = tmp73;
        tmp17 = tmp73 + 32;
        x86 = tmp17 - x86;
        tmp17 = tmp17;
        if (tmp73 == 66) {
        tmp73 = tmp17 + 19400;
        }
    }
}
int main() { test_func(); return 0; }

