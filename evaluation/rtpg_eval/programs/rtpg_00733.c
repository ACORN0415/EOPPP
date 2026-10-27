int test_func(void) {
    int v0 = 5;
    int v1 = 60;
    int v2 = 11;
    int i;
    v0 = v0 * 2;
    if (v0 > v2) { v0 = v2; }
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
