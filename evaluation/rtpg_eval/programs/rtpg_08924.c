int test_func(void) {
    int v0 = 62;
    int v1 = 38;
    int v2 = 7;
    int i;
    if (v1 > v2) { v1 = v2; }
    return v0;
}
int main(void) { return test_func(); }
