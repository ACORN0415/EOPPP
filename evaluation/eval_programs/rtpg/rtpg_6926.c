// RTPG_6926: vars=6 stmts=5
void test_func(void) {
    int b75 = 26304;
    int cur46 = 58155;
    int hi8 = 18;
    float cnt11 = 63.89;
    float b9 = 28.39;
    int x17 = 67;
    int *ptr = &x17;
    int i;
    for (i = 0; i < 82; i++) {
        hi8 = b9;
        hi8 = b9 + b9;
        cnt11 = b75;
        b9 = x17;
        b75 = hi8 + cnt11;
        *ptr = *ptr + 2;
    }
}
int main() { test_func(); return 0; }

