int test_func(void) {
    int v0 = 34;
    int v1 = 17;
    int v2 = 12;
    int i;
    if (v1 > v0) { v1 = v0; }
    return v0;
}
int main(void) { return test_func(); }
