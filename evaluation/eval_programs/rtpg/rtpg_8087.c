// RTPG_8087: vars=3 stmts=2
void test_func(void) {
    int res57 = 36;
    int cur49 = 4;
    int v79 = 16;
    int *ptr = &res57;
    int i;
    for (i = 0; i < 25; i++) {
        int j;
        for (j = 0; j < 20; j++) {
        res57 = res57;
        cur49 = res57 + v79;
        }
    }
}
int main() { test_func(); return 0; }

