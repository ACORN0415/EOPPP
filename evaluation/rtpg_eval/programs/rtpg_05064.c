int test_func(void) {
    int v0 = 89;
    int v1 = 47;
    int v2 = 56;
    int v3 = 69;
    int v4 = 5;
    int v5 = 17;
    int i;
    v3 = 88;
    v4 = v4 + v5;
    if (v3 > v5) { v3 = v5; }
    return v0;
}
int main(void) { return test_func(); }
