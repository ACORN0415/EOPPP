// RTPG_6545: vars=5 stmts=3
void test_func(void) {
    int acc6 = 89;
    int b10 = 37;
    int x64 = 2;
    int res11 = 38479;
    int z87 = 4;
    int i;
    for (i = 0; i < 96; i++) {
        int j;
        for (j = 0; j < 15; j++) {
        acc6 = b10 + res11;
        z87 = acc6 + -38;
        x64 = z87 - res11;
        }
    }
}
int main() { test_func(); return 0; }

