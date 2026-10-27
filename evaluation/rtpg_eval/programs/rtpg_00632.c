int test_func(void) {
    int v0 = 3;
    int v1 = 19;
    int v2 = 34;
    int i;
    if (v2 > v0) { v2 = v0; }
    return v0;
}
int main(void) { return test_func(); }
