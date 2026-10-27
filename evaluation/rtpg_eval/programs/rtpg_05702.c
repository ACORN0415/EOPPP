int test_func(void) {
    int v0 = 40;
    int v1 = 66;
    int v2 = 97;
    int i;
    if (v1 > v2) { v1 = v2; }
    v2 = v2 * 2;
    return v0;
}
int main(void) { return test_func(); }
