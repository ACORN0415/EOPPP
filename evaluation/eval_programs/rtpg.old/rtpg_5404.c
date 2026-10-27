// RTPG_5404: vars=5 stmts=2
void test_func(void) {
    int cnt74 = 4;
    int lo71 = 4;
    int z76 = 17;
    int z52 = 48338;
    int acc37 = 39978;
    int i;
    for (i = 0; i < 49; i++) {
        switch (z52) {
            case 0: z76 = 82; break;
            case 1: acc37 = 16862; break;
            case 2: lo71 = -40; break;
            default: break;
        }
        z52 = z52 + 1;
    }
done:
    z52 = 0;
}
int main() { test_func(); return 0; }

