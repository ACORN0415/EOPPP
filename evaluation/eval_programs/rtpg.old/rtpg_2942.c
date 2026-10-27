// RTPG_2942: vars=4 stmts=11
int idx_arr[16];
void test_func(void) {
    int tmp38 = 4;
    int res48 = 82;
    int cur58 = 43;
    int val77 = 36;
    int i;
    for (i = 0; i < 61; i++) {
        switch (val77) {
            case 0: tmp38 = 10821; break;
            case 1: tmp38 = 61628; break;
            case 2: cur58 = 42; break;
            default: break;
        }
        val77 = val77 + 1;
    }
}
int main() { test_func(); return 0; }

