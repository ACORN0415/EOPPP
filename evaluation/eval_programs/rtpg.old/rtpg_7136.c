// RTPG_7136: vars=4 stmts=3
void test_func(void) {
    int res5 = -45;
    int prev75 = 78;
    int cnt76 = 2;
    int c68 = 10926;
    int i;
    for (i = 0; i < 79; i++) {
        switch (prev75) {
            case 0: c68 = 26; break;
            case 1: res5 = 38449; break;
            default: break;
        }
        prev75 = prev75 + 1;
    }
done:
    res5 = 0;
}
int main() { test_func(); return 0; }

