// RTPG_7928: vars=5 stmts=5
void test_func(void) {
    int res32 = 1;
    float cur37 = 31.32;
    int prev30 = 55727;
    int tmp43 = 26366;
    int out47 = -26;
    int i;
    for (i = 0; i < 28; i++) {
        int j;
        for (j = 0; j < 14; j++) {
        res32 = out47 - tmp43;
        out47 = out47 + -30;
        cur37 = tmp43;
        out47 = out47 + res32;
        out47 = out47 + 5;
        }
    }
done:
    prev30 = 0;
}
int main() { test_func(); return 0; }

