// RTPG_3959: vars=3 stmts=5
int xn[16];
int yo[16];
int idx_arr[16];
enum State { RED, FAST, ON };
void test_func(void) {
    int lo76 = 21204;
    int cur79 = -16;
    int v45 = 8;
    enum State st = RED;
    int i;
    for (i = 0; i < 74; i++) {
        switch (v45) {
            case 0: lo76 = -47; break;
            case 1: lo76 = 56; break;
            default: break;
        }
        v45 = v45 + 1;
    }
}
int main() { test_func(); return 0; }

