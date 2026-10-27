int test_func(void) {
    int v0 = 55;
    int v1 = 68;
    int v2 = 13;
    int i;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
