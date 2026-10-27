// RTPG_4952: vars=4 stmts=6
void test_func(void) {
    int lo85 = 4;
    int y21 = 6;
    int acc74 = 13;
    int acc95 = 99;
    int i;
    for (i = 0; i < 63; i++) {
        lo85 = acc95 + lo85;
        y21 = y21;
        acc74 = acc95 - acc95;
        lo85 = y21;
        lo85 = y21 - lo85;
        lo85 = lo85 - 4;
    }
}
int main() { test_func(); return 0; }

