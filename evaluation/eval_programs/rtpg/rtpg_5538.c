// RTPG_5538: vars=5 stmts=5
void test_func(void) {
    int sum84 = 60;
    int tmp9 = 86;
    int x8 = 3;
    int lo70 = 2;
    int x46 = 3046;
    int i;
    for (i = 0; i < 23; i++) {
        lo70 = lo70 + 3;
        x46 = x46 + 1;
        x46 = tmp9 - sum84;
        sum84 = x8 - lo70;
        x46 = x46 - 3;
    }
}
int main() { test_func(); return 0; }

