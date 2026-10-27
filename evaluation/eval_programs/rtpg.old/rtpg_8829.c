// RTPG_8829: vars=3 stmts=7
void test_func(void) {
    int sum37 = 8;
    int a66 = 40047;
    int v82 = 8;
    int i;
    for (i = 0; i < 97; i++) {
        sum37 = a66 - 61;
        sum37 = sum37 + sum37;
        sum37 = sum37 + v82;
        v82 = sum37;
        v82 = a66;
        v82 = a66 + a66;
        a66 = a66 + 5;
    }
}
int main() { test_func(); return 0; }

