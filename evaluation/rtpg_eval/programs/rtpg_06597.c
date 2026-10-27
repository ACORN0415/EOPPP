int test_func(void) {
    int v0 = 13;
    int v1 = 51;
    int v2 = 73;
    int i;
    v2 = v2 * 2;
    if (v0 > v2) { v0 = v2; }
    return v0;
}
int main(void) { return test_func(); }
