// RTPG_9439: vars=4 stmts=5
void test_func(void) {
    int z26 = 44;
    int a67 = 2;
    int cur83 = 13;
    int dat31 = 2;
    int i;
    for (i = 0; i < 65; i++) {
        a67 = a67 + 5;
        dat31 = z26 - cur83;
        a67 = a67;
        a67 = dat31 + z26;
        dat31 = dat31 + cur83;
        if (a67 == 72) {
        dat31 = dat31 + 2;
        }
    }
}
int main() { test_func(); return 0; }

