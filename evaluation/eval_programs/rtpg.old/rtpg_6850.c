// RTPG_6850: vars=6 stmts=5
void test_func(void) {
    int b9 = 26304;
    int hi8 = 58155;
    int cnt11 = 18;
    float x17 = 63.89;
    float cur46 = 28.39;
    int b75 = 67;
    int *ptr = &b75;
    int i;
    for (i = 0; i < 82; i++) {
        cnt11 = cur46;
        cnt11 = cur46 + cur46;
        x17 = b9;
        cur46 = b75;
        b9 = cnt11 + x17;
        *ptr = *ptr + 2;
    }
}
int main() { test_func(); return 0; }

