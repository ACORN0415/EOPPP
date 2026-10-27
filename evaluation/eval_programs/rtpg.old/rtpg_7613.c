// RTPG_7613: vars=4 stmts=5
void test_func(void) {
    int hi68 = 71;
    int tmp28 = -50;
    int hi96 = 1;
    int c26 = 82;
    int i;
    for (i = 0; i < 98; i++) {
        switch (hi68) {
            case 0: hi96 = 3; break;
            case 1: hi96 = 4; break;
            case 2: tmp28 = 87; break;
            default: break;
        }
        hi68 = hi68 + 1;
    }
}
int main() { test_func(); return 0; }

