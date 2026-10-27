int test_func(void) {
    int v0 = 49;
    int v1 = 76;
    int v2 = 34;
    int i;
    v2 = 16;
    v1 = v1 * 5;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
