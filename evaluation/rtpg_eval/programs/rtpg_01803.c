int test_func(void) {
    int v0 = 44;
    int v1 = 18;
    int v2 = 29;
    int v3 = 22;
    int i;
    v2 = 19;
    v0 = v0 * 10;
    if (v3 > v1) { v3 = v1; }
    return v0;
}
int main(void) { return test_func(); }
