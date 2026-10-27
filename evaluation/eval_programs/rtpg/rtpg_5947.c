// RTPG_5947: vars=4 stmts=10
void test_func(void) {
    int cnt46 = 24;
    int tmp57 = 8412;
    int tmp63 = 43780;
    int dat50 = 10;
    int i;
    for (i = 0; i < 100; i++) {
        tmp63 = tmp57 / tmp63;
        cnt46 = tmp57 + cnt46;
        cnt46 = dat50 - cnt46;
        tmp57 = tmp63 | cnt46;
        cnt46 = cnt46 ^ tmp63;
        tmp63 = tmp63 + 4;
        tmp63 = cnt46 + tmp57;
        tmp57 = tmp57 + cnt46;
        dat50 = tmp57 - dat50;
        tmp63 = tmp63 | dat50;
    }
}
int main() { test_func(); return 0; }

