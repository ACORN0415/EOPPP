// RTPG_493: vars=4 stmts=5
void test_func(void) {
    int c67 = 3;
    int c56 = -26;
    int val42 = 45;
    int c46 = 9;
    int i;
    for (i = 0; i < 49; i++) {
        int j;
        for (j = 0; j < 8; j++) {
        c67 = c56 - 1;
        c67 = c67 - 1;
        c67 = c46 - val42;
        c67 = c67 + 5;
        c56 = val42 - 55933;
        }
    }
}
int main() { test_func(); return 0; }

