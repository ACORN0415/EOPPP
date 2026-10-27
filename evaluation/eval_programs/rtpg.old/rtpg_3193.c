// RTPG_3193: vars=5 stmts=2
void test_func(void) {
    int out40 = 31;
    int out55 = 26893;
    int a98 = -6;
    int sum36 = 8;
    int sum47 = 3;
    int *ptr = &out40;
    int i;
    for (i = 0; i < 52; i++) {
        out40 = out55;
        out40 = sum47 + sum36;
        *ptr = *ptr + 3;
    }
}
int main() { test_func(); return 0; }

