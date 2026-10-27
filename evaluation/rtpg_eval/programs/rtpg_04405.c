int test_func(void) {
    int v0 = 89;
    int v1 = 38;
    int v2 = 71;
    int i;
    if (v0 > v1) { v0 = v1; }
    return v0;
}
int main(void) { return test_func(); }
