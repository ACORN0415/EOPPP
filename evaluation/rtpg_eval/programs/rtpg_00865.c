int test_func(void) {
    int v0 = 54;
    int v1 = 94;
    int v2 = 31;
    int i;
    v2 = v2 - v0;
    v1 = 1;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
