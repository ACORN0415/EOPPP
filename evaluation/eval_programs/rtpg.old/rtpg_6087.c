// RTPG_6087: vars=3 stmts=5
int idx_arr[16];
void test_func(void) {
    int lo31 = 8624;
    int y12 = 36525;
    int val76 = 43;
    int i;
    for (i = 0; i < 72; i++) {
        int j;
        for (j = 0; j < 18; j++) {
        val76 = val76 + 1;
        lo31 = y12 - val76;
        val76 = lo31 - val76;
        y12 = val76 - lo31;
        lo31 = val76 + 11549;
        }
    }
}
int main() { test_func(); return 0; }

