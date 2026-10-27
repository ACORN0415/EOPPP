// RTPG_8615: vars=4 stmts=4
void test_func(void) {
    int z37 = -7;
    int tmp2 = 7;
    int tmp79 = 2736;
    int sum85 = 8;
    int *ptr = &sum85;
    int i;
    for (i = 0; i < 93; i++) {
        tmp79 = sum85 + z37;
        tmp2 = sum85 + 10;
        tmp79 = z37 - z37;
        sum85 = sum85;
        *ptr = *ptr + 5;
    }
}
int main() { test_func(); return 0; }

