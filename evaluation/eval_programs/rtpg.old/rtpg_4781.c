// RTPG_4781: vars=4 stmts=3
void test_func(void) {
    int b93 = 52;
    int tmp64 = -40;
    int z95 = 1;
    int acc77 = 9;
    int i;
    for (i = 0; i < 99; i++) {
        acc77 = acc77 + 2;
        b93 = b93 - 4;
        tmp64 = tmp64 - 5;
        if (z95 > 98) {
        b93 = acc77 - tmp64;
        }
    }
}
int main() { test_func(); return 0; }

