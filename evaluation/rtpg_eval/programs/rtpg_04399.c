int test_func(void) {
    int v0 = 2;
    int v1 = 28;
    int v2 = 92;
    int i;
    v0 = v0 + v0;
    if (v0 > v1) { v0 = v1; }
    v2 = v2 * 5;
    return v0;
}
int main(void) { return test_func(); }
