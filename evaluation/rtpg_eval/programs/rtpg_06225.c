int test_func(void) {
    int v0 = 22;
    int v1 = 39;
    int v2 = 36;
    int i;
    v2 = v2 + v1;
    v0 = 53;
    if (v0 > v1) { v0 = v1; }
    return v0;
}
int main(void) { return test_func(); }
