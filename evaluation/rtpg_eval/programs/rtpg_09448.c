int test_func(void) {
    int v0 = 21;
    int v1 = 67;
    int v2 = 2;
    int i;
    v2 = v2 * 2;
    v0 = 44;
    if (v2 > v0) { v2 = v0; }
    return v0;
}
int main(void) { return test_func(); }
