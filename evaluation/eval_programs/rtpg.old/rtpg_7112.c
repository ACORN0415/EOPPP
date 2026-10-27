// RTPG_7112: vars=8 stmts=4
void test_func(void) {
    int a94 = 49;
    int z32 = 25;
    int hi7 = 8;
    int x50 = -32;
    int tmp68 = -32;
    int c32 = 8;
    int out59 = 18;
    int acc67 = 2940;
    int *ptr = &hi7;
    int i;
    for (i = 0; i < 79; i++) {
        hi7 = z32 - 2;
        a94 = acc67;
        hi7 = a94;
        x50 = acc67 + c32;
        *ptr = *ptr + 2;
        if (acc67 > 23233) goto done;
    }
done:
    acc67 = 0;
}
int main() { test_func(); return 0; }

