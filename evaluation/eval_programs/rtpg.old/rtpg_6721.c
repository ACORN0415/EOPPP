// RTPG_6721: vars=6 stmts=5
void test_func(void) {
    int tmp14 = 2;
    int v24 = 5;
    int dat82 = 30;
    int x97 = 36751;
    int acc81 = 16;
    int val36 = 12484;
    int *ptr = &dat82;
    int i;
    for (i = 0; i < 14; i++) {
        dat82 = tmp14;
        tmp14 = dat82 - acc81;
        val36 = val36 - 5;
        tmp14 = tmp14 - 3;
        val36 = x97 + dat82;
        *ptr = *ptr + 1;
    }
}
int main() { test_func(); return 0; }

