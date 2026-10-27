// RTPG_5625: vars=4 stmts=2
void test_func(void) {
    int a11 = 93;
    int a91 = 0;
    float acc67 = 22.11;
    int v35 = 9;
    int i;
    for (i = 0; i < 58; i++) {
        a11 = a91 - acc67;
        a11 = a11 + acc67;
    }
}
int main() { test_func(); return 0; }

