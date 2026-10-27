// RTPG_9640: vars=4 stmts=5
void test_func(void) {
    int a67 = 44;
    int z26 = 2;
    int cur83 = 13;
    int dat31 = 2;
    int i;
    for (i = 0; i < 65; i++) {
        z26 = z26 + 5;
        dat31 = a67 - cur83;
        z26 = z26;
        z26 = dat31 + a67;
        dat31 = dat31 + cur83;
        if (z26 == 72) {
        dat31 = dat31 + 2;
        }
    }
}
int main() { test_func(); return 0; }

