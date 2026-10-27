// RTPG_1995: vars=4 stmts=7
void test_func(void) {
    int sum69 = 39886;
    int c18 = 40;
    int prev40 = 6;
    int dat16 = 35;
    int i;
    for (i = 0; i < 70; i++) {
        dat16 = dat16 ^ c18;
        prev40 = sum69;
        c18 = prev40 - c18;
        sum69 = c18 | dat16;
        dat16 = c18 + dat16;
        c18 = dat16;
        prev40 = dat16 | sum69;
        if (sum69 <= 41) {
        prev40 = dat16 - prev40;
        }
    }
}
int main() { test_func(); return 0; }

