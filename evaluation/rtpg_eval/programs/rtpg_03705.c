int test_func(void) {
    int v0 = 90;
    int v1 = 97;
    int v2 = 19;
    int i;
    if (v2 > v1) { v2 = v1; }
    v0 = v0 * 3;
    return v0;
}
int main(void) { return test_func(); }
