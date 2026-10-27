// RTPG_6347: vars=3 stmts=5
void test_func(void) {
    int y55 = 8;
    int val23 = 39;
    int z57 = 17;
    int *ptr = &z57;
    int i;
    for (i = 0; i < 85; i++) {
        y55 = val23 + 55302;
        val23 = val23 - 2;
        z57 = y55;
        z57 = y55 + z57;
        val23 = z57 + 23;
        *ptr = *ptr + 3;
        if (val23 != 94) {
        z57 = y55 - val23;
        }
    }
}
int main() { test_func(); return 0; }

