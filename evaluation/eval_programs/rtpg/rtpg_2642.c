// RTPG_2642: vars=5 stmts=2
void test_func(void) {
    int acc65 = 57311;
    int lo27 = 59;
    int a70 = 21;
    int prev6 = 59;
    int cur79 = 7;
    int *ptr = &a70;
    int i;
    for (i = 0; i < 92; i++) {
        lo27 = a70;
        lo27 = acc65 - a70;
        *ptr = *ptr + 4;
        if (cur79 >= 21) {
        a70 = lo27 + acc65;
        }
    }
}
int main() { test_func(); return 0; }

