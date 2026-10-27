// RTPG_9332: vars=4 stmts=3
int idx_arr[64];
void test_func(void) {
    int hi82 = 49;
    int cur68 = 34;
    int a21 = -15;
    int sum33 = 30694;
    int i;
    for (i = 0; i < 45; i++) {
        int j;
        for (j = 0; j < 10; j++) {
        sum33 = cur68 + sum33;
        a21 = a21 + a21;
        hi82 = sum33 + 18;
        }
    }
}
int main() { test_func(); return 0; }

