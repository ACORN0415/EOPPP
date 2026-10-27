int test_func(void) {
    int v0 = 68;
    int v1 = 81;
    int v2 = 78;
    int i;
    if (v2 > v1) { v2 = v1; }
    v0 = 79;
    return v0;
}
int main(void) { return test_func(); }
