// RTPG_9305: vars=3 stmts=5
void test_func(void) {
    int prev70 = -34;
    int lo60 = 57783;
    int c70 = 56;
    int i;
    for (i = 0; i < 45; i++) {
        switch (prev70) {
            case 0: prev70 = 52367; break;
            case 1: prev70 = 17398; break;
            default: break;
        }
        prev70 = prev70 + 1;
    }
}
int main() { test_func(); return 0; }

