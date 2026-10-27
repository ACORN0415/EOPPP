int test_func(void) {
    int v0 = 38;
    int v1 = 17;
    int v2 = 31;
    int i;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
