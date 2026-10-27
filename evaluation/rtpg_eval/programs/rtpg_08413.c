int test_func(void) {
    int v0 = 93;
    int v1 = 7;
    int v2 = 83;
    int i;
    v1 = v1 + v2;
    if (v2 > v1) { v2 = v1; }
    return v0;
}
int main(void) { return test_func(); }
