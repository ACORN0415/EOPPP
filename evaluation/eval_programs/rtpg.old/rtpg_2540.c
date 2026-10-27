// RTPG_2540: vars=4 stmts=7
void test_func(void) {
    int z63 = 33;
    int tmp47 = 32;
    int x53 = 14;
    int z23 = 44;
    int i;
    for (i = 0; i < 92; i++) {
        tmp47 = x53 - 2;
        tmp47 = x53 + 4;
        x53 = x53 + z63;
        tmp47 = z63;
        x53 = tmp47 - x53;
        z23 = x53 + x53;
        z23 = z23 - 3;
        if (x53 < 100) {
        tmp47 = z63 + z23;
        }
    }
}
int main() { test_func(); return 0; }

