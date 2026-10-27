// RTPG_5398: vars=4 stmts=4
void test_func(void) {
    int x13 = 17166;
    int cnt3 = -43;
    int prev88 = 69;
    int cur90 = 10;
    int i;
    for (i = 0; i < 90; i++) {
        int j;
        for (j = 0; j < 11; j++) {
        cnt3 = prev88 + x13;
        cnt3 = cur90 - prev88;
        prev88 = cnt3 - cur90;
        cnt3 = cur90;
        }
    }
}
int main() { test_func(); return 0; }

