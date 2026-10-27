// RTPG_9963: vars=7 stmts=5
void test_func(void) {
    int acc16 = 33;
    int b20 = 46102;
    int cur5 = 30656;
    int acc67 = 10;
    int y96 = 50076;
    int acc35 = 28500;
    int val69 = 31414;
    int i;
    for (i = 0; i < 24; i++) {
        int j;
        for (j = 0; j < 14; j++) {
        b20 = b20 + 3;
        cur5 = acc16 + acc35;
        acc67 = acc67 - 3;
        acc35 = cur5 - y96;
        y96 = acc16 - 66;
        }
    }
}
int main() { test_func(); return 0; }

