// RTPG_4946: vars=3 stmts=2
void test_func(void) {
    int dat85 = 21;
    int lo19 = 8936;
    int y64 = 15;
    int i;
    for (i = 0; i < 79; i++) {
        lo19 = y64 + 3;
        lo19 = lo19 - lo19;
    }
}
int main() { test_func(); return 0; }

