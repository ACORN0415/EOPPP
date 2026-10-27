int test_func(void) {
    int v0 = 67;
    int v1 = 33;
    int v2 = 82;
    int i;
    v0 = v0 + v1;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
