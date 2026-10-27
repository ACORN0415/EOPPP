// RTPG_4583: vars=3 stmts=2
void test_func(void) {
    int cnt70 = 9249;
    int z26 = 5;
    int cnt89 = 57;
    int *ptr = &cnt89;
    int i;
    for (i = 0; i < 21; i++) {
        z26 = cnt70;
        z26 = z26 - 3;
        *ptr = *ptr + 2;
        if (z26 <= 53) {
        cnt70 = cnt89;
        }
    }
}
int main() { test_func(); return 0; }

