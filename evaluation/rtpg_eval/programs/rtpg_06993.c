int test_func(void) {
    int v0 = 88;
    int v1 = 12;
    int v2 = 89;
    int i;
    v0 = 26;
    v1 = v1 - v0;
    v1 = v1 + v0;
    if (v0 > v1) { v0 = v1; }
    return v0;
}
int main(void) { return test_func(); }
