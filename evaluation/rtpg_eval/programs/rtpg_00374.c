int test_func(void) {
    int v0 = 14;
    int v1 = 97;
    int v2 = 79;
    int i;
    v2 = 19;
    if (v1 > v2) { v1 = v2; }
    v2 = v2 - v0;
    return v0;
}
int main(void) { return test_func(); }
