// RTPG_8789: vars=5 stmts=6
void test_func(void) {
    float tmp0 = 28.97;
    int c91 = 1;
    float acc86 = 52.37;
    int y96 = 6;
    float val69 = 29.38;
    int *ptr = &acc86;
    int i;
    for (i = 0; i < 94; i++) {
        switch (val69) {
            case 0: tmp0 = 3; break;
            case 1: acc86 = 29; break;
            case 2: tmp0 = 41323; break;
            case 3: y96 = 48817; break;
            default: break;
        }
        val69 = val69 + 1;
    }
}
int main() { test_func(); return 0; }

