// RTPG_4342: vars=5 stmts=5
void test_func(void) {
    int acc23 = 3;
    int val47 = 8256;
    int y21 = 8;
    int lo58 = 1;
    int y78 = 59722;
    int i;
    for (i = 0; i < 78; i++) {
        y78 = y78 + acc23;
        acc23 = y78 + 5;
        y21 = y78 + y21;
        val47 = y78 % y78;
        val47 = acc23 / val47;
    }
}
int main() { test_func(); return 0; }

