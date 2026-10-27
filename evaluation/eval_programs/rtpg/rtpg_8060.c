// RTPG_8060: vars=3 stmts=12
void test_func(void) {
    int x61 = 17626;
    int tmp51 = 8;
    int acc23 = -12;
    int i;
    for (i = 0; i < 57; i++) {
        x61 = acc23 + tmp51;
        x61 = x61 + 9;
        tmp51 = acc23 + x61;
        acc23 = acc23 / tmp51;
        x61 = x61 + acc23;
        acc23 = acc23 | tmp51;
        tmp51 = tmp51 + x61;
        x61 = acc23 % tmp51;
        acc23 = acc23;
        tmp51 = acc23 - x61;
        tmp51 = tmp51 ^ x61;
        acc23 = acc23 - x61;
    }
}
int main() { test_func(); return 0; }

