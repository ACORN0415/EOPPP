// RTPG_5538: vars=4 stmts=2
void test_func(void) {
    int a11 = 93;
    int a91 = 0;
    float v35 = 22.11;
    int acc67 = 9;
    int i;
    for (i = 0; i < 58; i++) {
        a11 = a91 - v35;
        a11 = a11 + v35;
    }
}
int main() { test_func(); return 0; }

