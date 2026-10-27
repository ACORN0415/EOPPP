// RTPG_381: vars=4 stmts=8
void test_func(void) {
    int prev78 = -8;
    int out74 = 25;
    int lo77 = -15;
    int acc70 = 1;
    int *ptr = &acc70;
    int i;
    for (i = 0; i < 98; i++) {
        switch (out74) {
            case 0: prev78 = 14; break;
            case 1: prev78 = 93; break;
            case 2: prev78 = 4; break;
            case 3: lo77 = 0; break;
            default: break;
        }
        out74 = out74 + 1;
    }
done:
    out74 = 0;
}
int main() { test_func(); return 0; }

