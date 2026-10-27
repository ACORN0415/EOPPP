// RTPG_5817: vars=3 stmts=3
void test_func(void) {
    int hi85 = 56;
    int v1 = 9;
    int c58 = 51;
    int i;
    for (i = 0; i < 35; i++) {
        int j;
        for (j = 0; j < 15; j++) {
        c58 = hi85 - 8;
        v1 = v1 + 3;
        c58 = v1;
        }
    }
}
int main() { test_func(); return 0; }

