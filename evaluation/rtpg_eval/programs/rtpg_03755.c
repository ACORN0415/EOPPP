int test_func(void) {
    int v0 = 18;
    int v1 = 42;
    int v2 = 80;
    int i;
    v0 = 65;
    if (v0 > v1) { v0 = v1; }
    v0 = v0 - v1;
    return v0;
}
int main(void) { return test_func(); }
