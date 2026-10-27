// RTPG_5611: vars=8 stmts=12
void test_func(void) {
    int acc64 = -11;
    int z47 = 30;
    int cnt38 = 15270;
    int c68 = 8;
    int tmp90 = 47816;
    int z51 = 13191;
    int hi4 = -13;
    int val36 = 74;
    int *ptr = &tmp90;
    int i;
    for (i = 0; i < 58; i++) {
        z51 = z51 - acc64;
        z47 = z51;
        tmp90 = tmp90 + 4;
        hi4 = hi4 + 5;
        acc64 = acc64 - 5;
        z47 = hi4;
        hi4 = cnt38 - -45;
        hi4 = acc64 - cnt38;
        tmp90 = tmp90 + 3;
        acc64 = val36;
        hi4 = hi4 - 1;
        val36 = val36 - 4;
        *ptr = *ptr + 5;
    }
}
int main() { test_func(); return 0; }

