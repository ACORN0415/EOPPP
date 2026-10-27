// RTPG_2525: vars=4 stmts=7
void test_func(void) {
    int z63 = 33;
    int x53 = 32;
    int z23 = 14;
    int tmp47 = 44;
    int i;
    for (i = 0; i < 92; i++) {
        x53 = z23 - 2;
        x53 = z23 + 4;
        z23 = z23 + z63;
        x53 = z63;
        z23 = x53 - z23;
        tmp47 = z23 + z23;
        tmp47 = tmp47 - 3;
        if (z23 < 100) {
        x53 = z63 + tmp47;
        }
    }
}
int main() { test_func(); return 0; }

