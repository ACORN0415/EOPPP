int test_func(void) {
    int v0 = 27;
    int v1 = 13;
    int v2 = 38;
    int i;
    if (v1 > v0) { v1 = v0; }
    return v0;
}
int main(void) { return test_func(); }
