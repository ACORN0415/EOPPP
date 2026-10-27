int test_func(void) {
    int v0 = 58;
    int v1 = 40;
    int v2 = 75;
    int i;
    v2 = v2 + v1;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
