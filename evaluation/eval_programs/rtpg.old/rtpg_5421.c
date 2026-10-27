// RTPG_5421: vars=6 stmts=8
void test_func(void) {
    int z43 = 8;
    int tmp64 = 9;
    int cur82 = 11;
    int b62 = -18;
    int out2 = 20176;
    int lo58 = 4;
    int *ptr = &cur82;
    int i;
    for (i = 0; i < 46; i++) {
        cur82 = b62 - z43;
        b62 = b62 + 5;
        lo58 = b62;
        cur82 = lo58 - 60;
        lo58 = b62 - 52;
        lo58 = cur82 - z43;
        tmp64 = cur82 + out2;
        b62 = out2 + 7;
        *ptr = *ptr + 4;
    }
}
int main() { test_func(); return 0; }

