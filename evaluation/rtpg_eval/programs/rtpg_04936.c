int test_func(void) {
    int v0 = 54;
    int v1 = 27;
    int v2 = 66;
    int i;
    v0 = 56;
    if (v0 > v1) { v0 = v1; }
    return v0;
}
int main(void) { return test_func(); }
