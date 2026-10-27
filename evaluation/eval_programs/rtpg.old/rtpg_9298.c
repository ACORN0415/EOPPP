// RTPG_9298: vars=11 stmts=11
void test_func(void) {
    int b36 = 8;
    float x43 = 94.57;
    int x76 = 865;
    int tmp92 = 21;
    float tmp96 = 11.21;
    double prev59 = 17.16;
    int res72 = 39609;
    double prev29 = 70.62;
    int cur35 = 5;
    int sum98 = 0;
    int sum19 = 4;
    int *ptr = &sum98;
    int i;
    for (i = 0; i < 70; i++) {
        x76 = sum19 - sum98;
        prev29 = prev29 - tmp96;
        res72 = res72 - 2;
        cur35 = sum19;
        res72 = res72 - 4;
        tmp96 = tmp96 + 4;
        tmp96 = tmp92 - prev59;
        prev29 = prev29 + 3;
        tmp96 = sum98 + prev29;
        sum98 = sum98;
        prev59 = tmp92 + prev59;
        *ptr = *ptr + 3;
    }
}
int main() { test_func(); return 0; }

