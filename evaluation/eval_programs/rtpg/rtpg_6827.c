// RTPG_6827: vars=3 stmts=2
void test_func(void) {
    int z63 = 4;
    int cnt72 = 43;
    int cnt47 = 3;
    int *ptr = &cnt47;
    int i;
    for (i = 0; i < 22; i++) {
        int j;
        for (j = 0; j < 20; j++) {
        cnt47 = cnt47 - 1;
        cnt47 = cnt47 - 1;
        }
    }
}
int main() { test_func(); return 0; }

