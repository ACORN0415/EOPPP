// RTPG_6185: vars=6 stmts=6
void test_func(void) {
    int res5 = 49;
    int v49 = 4682;
    int sum7 = 64306;
    int prev73 = 0;
    int prev38 = 2;
    int b23 = 11659;
    int i;
    for (i = 0; i < 88; i++) {
        int j;
        for (j = 0; j < 10; j++) {
        sum7 = res5 - prev73;
        b23 = prev38 - prev73;
        prev38 = v49 + prev38;
        res5 = sum7 - prev38;
        prev73 = res5 - v49;
        prev38 = prev38 - 6;
        }
    }
}
int main() { test_func(); return 0; }

