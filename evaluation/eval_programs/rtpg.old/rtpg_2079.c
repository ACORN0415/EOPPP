// RTPG_2079: vars=3 stmts=6
void test_func(void) {
    int cnt51 = 17;
    int z60 = -24;
    int val4 = 3;
    int *ptr = &cnt51;
    int i;
    for (i = 0; i < 44; i++) {
        cnt51 = cnt51 - z60;
        cnt51 = cnt51 + 9;
        cnt51 = cnt51 + 3;
        val4 = cnt51;
        z60 = val4 - 6;
        z60 = z60 + 1;
        *ptr = *ptr + 3;
    }
}
int main() { test_func(); return 0; }

