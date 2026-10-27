// RTPG_4370: vars=3 stmts=5
void test_func(void) {
    int sum82 = -26;
    int tmp16 = 39;
    int res80 = 7;
    int i;
    for (i = 0; i < 51; i++) {
        tmp16 = tmp16 + -33;
        sum82 = res80;
        res80 = tmp16 + sum82;
        sum82 = sum82 + 5;
        sum82 = res80 - 10;
        if (res80 < 72) {
        tmp16 = res80;
        }
    }
}
int main() { test_func(); return 0; }

