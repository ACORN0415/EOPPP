// RTPG_3523: vars=3 stmts=6
int idx_arr[64];
void test_func(void) {
    int out46 = 4207;
    int x15 = 4902;
    int acc13 = 46;
    int i;
    for (i = 0; i < 93; i++) {
        int j;
        for (j = 0; j < 18; j++) {
        acc13 = acc13 - 2;
        out46 = acc13 - out46;
        out46 = out46 + 5;
        acc13 = acc13 - 4;
        out46 = x15 + out46;
        x15 = x15 - 2;
        }
    }
}
int main() { test_func(); return 0; }

