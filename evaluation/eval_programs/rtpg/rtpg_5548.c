// RTPG_5548: vars=4 stmts=2
void test_func(void) {
    int lo62 = 10;
    int lo4 = 20;
    int b80 = -2;
    int hi45 = 25;
    int *ptr = &lo4;
    int i;
    for (i = 0; i < 95; i++) {
        b80 = hi45 + b80;
        lo4 = lo4 - 48;
        *ptr = *ptr + 4;
    }
}
int main() { test_func(); return 0; }

