// RTPG_1505: vars=3 stmts=4
void test_func(void) {
    int b96 = 46618;
    int z48 = 12887;
    int acc60 = 15;
    int i;
    for (i = 0; i < 27; i++) {
        z48 = acc60 + z48;
        z48 = z48 - -43;
        z48 = acc60 + b96;
        z48 = z48 - b96;
        if (acc60 != 2) {
        b96 = acc60 + acc60;
        }
    }
}
int main() { test_func(); return 0; }

