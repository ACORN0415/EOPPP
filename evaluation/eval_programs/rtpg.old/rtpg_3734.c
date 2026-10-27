// RTPG_3734: vars=6 stmts=4
void test_func(void) {
    int b67 = -46;
    int z83 = 3;
    int val70 = 80;
    int z64 = 1495;
    int tmp98 = 18495;
    int cnt32 = 10;
    int i;
    for (i = 0; i < 92; i++) {
        val70 = tmp98;
        tmp98 = tmp98 - cnt32;
        z83 = cnt32 + z83;
        z83 = z83 - 1;
        if (z83 == -2) {
        tmp98 = tmp98 - 2;
        }
    }
}
int main() { test_func(); return 0; }

