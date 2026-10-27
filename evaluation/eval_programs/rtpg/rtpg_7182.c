// RTPG_7182: vars=8 stmts=4
void test_func(void) {
    int hi7 = 49;
    int c32 = 25;
    int z32 = 8;
    int acc67 = -32;
    int out59 = -32;
    int a94 = 8;
    int x50 = 18;
    int tmp68 = 2940;
    int *ptr = &z32;
    int i;
    for (i = 0; i < 79; i++) {
        z32 = c32 - 2;
        hi7 = tmp68;
        z32 = hi7;
        acc67 = tmp68 + a94;
        *ptr = *ptr + 2;
        if (tmp68 > 23233) goto done;
    }
done:
    tmp68 = 0;
}
int main() { test_func(); return 0; }

