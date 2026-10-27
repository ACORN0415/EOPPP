// RTPG_2277: vars=6 stmts=11
void test_func(void) {
    int x82 = 11;
    int x47 = 28081;
    int v17 = 5;
    int dat7 = 100;
    int hi69 = 51;
    int tmp87 = 30;
    int *ptr = &hi69;
    int i;
    for (i = 0; i < 80; i++) {
        hi69 = x47;
        v17 = tmp87 - 21;
        tmp87 = tmp87 - v17;
        tmp87 = tmp87 + 5;
        dat7 = x47;
        hi69 = x82 + 30477;
        x82 = x82 - 5;
        v17 = v17 + 2;
        x82 = x47 + 21950;
        hi69 = dat7 - 16826;
        dat7 = v17;
        *ptr = *ptr + 3;
    }
}
int main() { test_func(); return 0; }

