int test_func(void) {
    int v0 = 75;
    int v1 = 33;
    int v2 = 83;
    int i;
    v1 = v1 + v0;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
