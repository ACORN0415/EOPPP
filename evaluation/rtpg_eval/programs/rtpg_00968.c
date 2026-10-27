int test_func(void) {
    int v0 = 99;
    int v1 = 91;
    int v2 = 89;
    int i;
    if (v2 > v1) { v2 = v1; }
    return v0;
}
int main(void) { return test_func(); }
