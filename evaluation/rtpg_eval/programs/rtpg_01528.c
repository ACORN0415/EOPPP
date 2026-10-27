int test_func(void) {
    int v0 = 27;
    int v1 = 34;
    int v2 = 76;
    int v3 = 53;
    int v4 = 95;
    int v5 = 70;
    int i;
    v5 = v5 - v1;
    switch (v5) {
        case 0: v5 = 1; break;
        case 1: v5 = 2; break;
        default: v5 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
