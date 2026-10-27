// RTPG_8268: vars=4 stmts=4
void test_func(void) {
    int lo48 = 57;
    int v31 = 6;
    int res61 = 9;
    int hi52 = 1190;
    int i;
    for (i = 0; i < 84; i++) {
        int j;
        for (j = 0; j < 16; j++) {
        res61 = lo48;
        hi52 = res61 + v31;
        hi52 = v31;
        lo48 = res61;
        }
    }
}
int main() { test_func(); return 0; }

