// RTPG_4634: vars=3 stmts=2
void test_func(void) {
    int z26 = 9249;
    int cnt89 = 5;
    int cnt70 = 57;
    int *ptr = &cnt70;
    int i;
    for (i = 0; i < 21; i++) {
        cnt89 = z26;
        cnt89 = cnt89 - 3;
        *ptr = *ptr + 2;
        if (cnt89 <= 53) {
        z26 = cnt70;
        }
    }
}
int main() { test_func(); return 0; }

