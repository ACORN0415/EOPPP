// RTPG_8476: vars=3 stmts=4
void test_func(void) {
    int sum29 = 66;
    int lo19 = 36404;
    int y26 = 67;
    int i;
    for (i = 0; i < 82; i++) {
        y26 = sum29 + y26;
        y26 = y26 + lo19;
        lo19 = sum29 - y26;
        lo19 = y26 - lo19;
    }
}
int main() { test_func(); return 0; }

