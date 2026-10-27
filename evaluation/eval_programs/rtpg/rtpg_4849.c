// RTPG_4849: vars=4 stmts=3
void test_func(void) {
    int acc77 = 52;
    int z95 = -40;
    int b93 = 1;
    int tmp64 = 9;
    int i;
    for (i = 0; i < 99; i++) {
        tmp64 = tmp64 + 2;
        acc77 = acc77 - 4;
        z95 = z95 - 5;
        if (b93 > 98) {
        acc77 = tmp64 - z95;
        }
    }
}
int main() { test_func(); return 0; }

