// RTPG_5685: vars=4 stmts=2
int xn[32];
int yo[32];
void test_func(void) {
    int res14 = 6;
    int b9 = 23;
    int y20 = 8;
    int val86 = -40;
    int *ptr = &res14;
    int i;
    for (i = 0; i < 57; i++) {
        int j;
        for (j = 0; j < 5; j++) {
        val86 = b9;
        b9 = val86;
        }
    }
}
int main() { test_func(); return 0; }

