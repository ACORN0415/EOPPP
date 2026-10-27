int test_func(void) {
    int v0 = 89;
    int v1 = 93;
    int v2 = 39;
    int v3 = 69;
    int i;
    if (v2 > v3) { v2 = v3; }
    return v0;
}
int main(void) { return test_func(); }
