int test_func(void) {
    int v0 = 61;
    int v1 = 79;
    int v2 = 67;
    int i;
    v1 = 38;
    if (v1 > v2) { v1 = v2; }
    return v0;
}
int main(void) { return test_func(); }
