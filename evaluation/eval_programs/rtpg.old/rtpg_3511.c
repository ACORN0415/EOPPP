// RTPG_3511: vars=3 stmts=6
int idx_arr[64];
void test_func(void) {
    int x15 = 4207;
    int acc13 = 4902;
    int out46 = 46;
    int i;
    for (i = 0; i < 93; i++) {
        int j;
        for (j = 0; j < 18; j++) {
        out46 = out46 - 2;
        x15 = out46 - x15;
        x15 = x15 + 5;
        out46 = out46 - 4;
        x15 = acc13 + x15;
        acc13 = acc13 - 2;
        }
    }
}
int main() { test_func(); return 0; }

