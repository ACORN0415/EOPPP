int test_func(void) {
    int v0 = 73;
    int v1 = 47;
    int v2 = 18;
    int i;
    v0 = v0 * 5;
    v2 = v2 - v1;
    v1 = v1 + v0;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
