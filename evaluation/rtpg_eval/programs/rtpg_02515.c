int test_func(void) {
    int v0 = 27;
    int v1 = 59;
    int v2 = 1;
    int v3 = 97;
    int v4 = 8;
    int i;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
