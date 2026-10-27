int test_func(void) {
    int v0 = 37;
    int v1 = 87;
    int v2 = 39;
    int i;
    v2 = v2 - v0;
    if (v1 > v2) { v1 = v2; }
    v2 = 93;
    return v0;
}
int main(void) { return test_func(); }
