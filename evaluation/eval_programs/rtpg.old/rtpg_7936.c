// RTPG_7936: vars=10 stmts=8
void test_func(void) {
    int val63 = 2;
    int sum10 = 47;
    float dat42 = 34.94;
    int prev64 = 10;
    double hi89 = 81.91;
    int dat92 = -25;
    float v6 = 30.96;
    int cur92 = 7;
    int res84 = 10;
    int out7 = 27682;
    int *ptr = &out7;
    int h0 = 3;
    int sv0 = 0;
    int h1 = 7;
    int sv1 = 0;
    int h2 = 9;
    int sv2 = 0;
    int h3 = 18245;
    int sv3 = 0;
    int i;
    for (i = 0; i < 39; i++) {
        int j;
        for (j = 0; j < 9; j++) {
        prev64 = out7 - dat92;
        sum10 = dat92;
        sum10 = sum10 - 1;
        out7 = out7 + 5;
        hi89 = sum10 - prev64;
        v6 = hi89;
        dat92 = out7 + val63;
        cur92 = prev64 + prev64;
        }
    }
}
int main() { test_func(); return 0; }

