int test_func(void) {
    int v0 = 95;
    int v1 = 27;
    int v2 = 33;
    int i;
    v1 = 26;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
