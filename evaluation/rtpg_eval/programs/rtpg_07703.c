int test_func(void) {
    int v0 = 65;
    int v1 = 38;
    int v2 = 8;
    int i;
    v1 = v1 * 5;
    if (v0 > v1) { v0 = v1; }
    v1 = v1 + v0;
    return v0;
}
int main(void) { return test_func(); }
