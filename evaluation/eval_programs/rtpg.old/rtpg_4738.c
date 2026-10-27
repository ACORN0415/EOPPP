// RTPG_4738: vars=4 stmts=3
void test_func(void) {
    int dat30 = 1;
    int val2 = 20;
    int z32 = 4118;
    int out66 = 15018;
    int *ptr = &z32;
    int h0 = 5;
    int sv0 = 0;
    int h1 = 76;
    int sv1 = 0;
    int i;
    for (i = 0; i < 26; i++) {
        int j;
        for (j = 0; j < 12; j++) {
        out66 = val2;
        dat30 = dat30 + 3;
        val2 = out66 + -22;
        }
    }
}
int main() { test_func(); return 0; }

