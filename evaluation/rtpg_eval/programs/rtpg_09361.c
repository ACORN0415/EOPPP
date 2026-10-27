int test_func(void) {
    int v0 = 80;
    int v1 = 50;
    int v2 = 58;
    int v3 = 44;
    int v4 = 70;
    int v5 = 59;
    int i;
    v0 = v0 * 5;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
