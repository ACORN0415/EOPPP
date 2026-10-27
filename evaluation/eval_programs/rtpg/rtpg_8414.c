// RTPG_8414: vars=4 stmts=3
int idx_arr[64];
void test_func(void) {
    int tmp11 = -24;
    int c67 = 7;
    int lo65 = 4;
    int c12 = -3;
    int i;
    for (i = 0; i < 45; i++) {
        int j;
        for (j = 0; j < 5; j++) {
        c12 = c12 + 7;
        lo65 = tmp11 - c12;
        tmp11 = lo65;
        }
    }
}
int main() { test_func(); return 0; }

