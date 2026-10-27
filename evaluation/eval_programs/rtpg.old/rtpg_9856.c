// RTPG_9856: vars=3 stmts=5
void test_func(void) {
    int z81 = -45;
    int val66 = 3;
    int cnt58 = 100;
    int *ptr = &cnt58;
    int i;
    for (i = 0; i < 75; i++) {
        cnt58 = cnt58;
        z81 = val66 + 729;
        z81 = z81 / val66;
        val66 = z81 + val66;
        val66 = val66 - 3;
        *ptr = *ptr + 4;
    }
}
int main() { test_func(); return 0; }

